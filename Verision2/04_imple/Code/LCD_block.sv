module LCD_block #(
    parameter FREQ          = 50_000_000    ,
    parameter SIZE_DATA     = 32             
)(
    input logic                     i_clk       ,
    input logic                     i_rst_n     ,
    input logic                     i_en_data   ,
    input logic [SIZE_DATA-1:0]     i_lcd_data  ,
    
    output logic [SIZE_DATA-1:0]    o_LCD_DATA  ,
    output logic                    o_LCD_E     ,
    output logic                    o_LCD_RW    ,
    output logic                    o_LCD_RS    ,
    output logic                    o_LCD_ON    ,
    output logic                    o_LCD_BLON  ,
    output logic                    o_done_lcd  
);

endmodule
