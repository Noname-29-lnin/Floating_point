module UART_Rx #(
    parameter SIZE_DATA     = 8,
    parameter OVER_SAMPLE   = 16,
    parameter MID_SAMPLE    = 8
)(
    input logic                         i_clk       , // clock for CPU
    input logic                         i_rst_n     , // active low reset
    input logic                         i_stick     , // baud rate signal
    input logic                         i_rx_en     , // enable signal for receiver
    input logic                         i_fifo_full , // FIFO full signal
    input logic                         i_rx_data , // serial data to be received

    output logic [SIZE_DATA - 1 : 0]    o_rx_data   , // data to be received parallel
    output logic                        o_rx_done     // end signal
);

///////////////////////////////////////////////////////////////////////
// Localparam
///////////////////////////////////////////////////////////////////////

localparam SIZE_STATUS  = 3;
localparam IDLE         = 3'b000;
localparam START        = 3'b001;
localparam TRANSMIT     = 3'b010;
// localparam  PARITY      = 3'b011;
localparam STOP_I       = 3'b100;
localparam STOP_II      = 3'b101;
localparam DONE         = 3'b110;

localparam SIZE_COUNT   = $clog2(OVER_SAMPLE);
localparam SIZE_INDEX   = $clog2(SIZE_DATA);

///////////////////////////////////////////////////////////////////////
// Internal Logics
///////////////////////////////////////////////////////////////////////

logic [SIZE_STATUS-1:0]     state, n_state;
logic [SIZE_COUNT:0]        count, n_count;
logic [SIZE_INDEX:0]        index, n_index;
logic w_update_sampling, w_update_mid_sampling, w_update_data, w_detect_start;

///////////////////////////////////////////////////////////////////////
// Submodules
///////////////////////////////////////////////////////////////////////

UART_SS_detect_edge #(
    .POS_EDGE (0)   // 1: posedge, 0: negedge
) UART_DETECT_NEG (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_signal       (i_rx_data),
    .o_signal       (w_detect_start)
);

assign w_update_mid_sampling    = (count == MID_SAMPLE-1);
assign w_update_sampling        = (count == OVER_SAMPLE-1);
assign w_update_data            = (index == SIZE_DATA-1);

///////////////////////////////////////////////////////////////////////
// Process
///////////////////////////////////////////////////////////////////////

always_comb begin : proc_next_state
    case (state)
        IDLE: begin
            n_state = (w_detect_start & i_rx_en & (~i_fifo_full)) ? START : IDLE;
            n_count = '0;
            n_index = '0;
        end
        START: begin
            n_state = (w_update_mid_sampling) ? ((i_rx_data) ? IDLE : TRANSMIT) : (START);
            n_count = (w_update_mid_sampling) ? '0 : (i_stick ? (count + 1'b1) : (count));
            n_index = '0;
        end
        TRANSMIT: begin
            n_state = (w_update_sampling & w_update_data) ? STOP_I : TRANSMIT;
            n_count = (w_update_sampling) ? ( '0 ) : ( i_stick ? (count + 1'b1) : (count) );
            n_index = (w_update_data) ? ( index ) : (w_update_sampling ? (index + 1'b1) : (index));
        end
        STOP_I: begin
            n_state = (w_update_sampling) ? STOP_II : STOP_I;
            n_count = (w_update_sampling) ? index : (i_stick ? (count + 1'b1) : (count));
            n_index = '0;
        end
        STOP_II: begin
            n_state = (w_update_sampling) ? DONE : STOP_II;
            n_count = (w_update_sampling) ? index : (i_stick ? (count + 1'b1) : (count));
            n_index = '0;
        end
        DONE: begin
            n_state = IDLE;
            n_count = '0;
            n_index = index;
        end
        default: begin
            n_state = IDLE;
            n_count = '0;
            n_index = '0; 
        end 
    endcase
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_state
    if(~i_rst_n) begin
        state   <= '0;
        count   <= '0;
        index   <= '0; 
    end else begin
        state   <= n_state;
        count   <= n_count;
        index   <= n_index; 
    end
end

logic [SIZE_DATA-1:0] w_o_rx_data;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_w_out_data
    if(~i_rst_n) begin
        w_o_rx_data   <= '0;
    end else begin
        if(state == TRANSMIT)
            w_o_rx_data[index[SIZE_INDEX-1:0]] <= i_rx_data;
    end
end

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_out_data
    if(~i_rst_n) begin
        o_rx_data   <= '0;
    end else begin
        if(o_rx_done)
            o_rx_data <= w_o_rx_data;
    end
end

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_done_rx
    if(~i_rst_n) begin
        o_rx_done   <= 1'b0;
    end else begin
        o_rx_done   <= state[2] & state[1] & (~state[0]);
    end
end

endmodule 
