Dưới đây mình giải thích chi tiết — bước-bước — và cách debug + cách xử lý cho báo cáo `timing.rpt` bạn dán lên.

Mình sẽ làm 3 phần: (A) đọc và giải thích từng số trong report, (B) tại sao vẫn thấy `clk` dù module FPU không có cổng clock, (C) làm gì để debug & sửa lỗi (câu lệnh cụ thể).

---

# A — Giải thích từng mục trong Path (tóm tắt)

**Header**

```
Path 1: VIOLATED (-1915 ps) Late External Delay Assertion at pin o_32_s[23]
 Startpoint: (F) i_32_a[29]
   Clock: (R) clk
Endpoint: (R) o_32_s[23]
   Clock: (R) clk
```

* Đây là **path từ primary input `i_32_a[29]` (F = primary **F**ront? nghĩa là *from primary input*) tới primary output `o_32_s[23]`**.
* Tool xem xét nó theo clock `clk` (đã được bạn định nghĩa trong constraint).
* **Late External Delay Assertion**: báo rằng output đến muộn so với yêu cầu do external delays bạn khai báo (input/output external_delay).
* `VIOLATED (-1915 ps)` = slack âm 1915 ps (tức trễ vượt ngưỡng 1.915 ns).

**Bảng tóm tắt trên cùng**

```
Capture Clock Edge:+   20000            0     
Src Latency:+       0            0     
Net Latency:+       0 (I)        0 (I) 
Arrival:=   20000            0     

Output Delay:-   10000                  
Uncertainty:-     200                  
Required Time:=    9800                  
Launch Clock:-       0                  
Input Delay:-   10000                  
Data Path:-    1715                  
Slack:=   -1915
```

Giải nghĩa số-số (theo thứ tự hữu ích):

* **Capture Clock Edge `+ 20000`**: đây là thời điểm *bắt* (capture) của clock ở bên nhận (capture edge) tính bằng ps — tức bạn đã định nghĩa period = 20,000 ps (20 ns). Tool dùng thời điểm capture = +period = 20000 ps để tính Required time cho output (nguyên tắc: dữ liệu phải có ở output trước capture − output_delay − uncertainty).
* **Output Delay = 10000**: bạn đã đặt `external_delay -output $OUT_DLY` và `OUT_DLY = PERIOD/2 = 10000 ps`. Tool trừ output_delay khi tính Required.
* **Uncertainty = 200**: đây là clock uncertainty bạn đặt (`UNCER`) = PERIOD/100000 = 0.2 ps — nhưng ở đây report dùng 200 (có khả năng đơn vị là 0.2 ns? — tuy nhiên con số trong report là 200 ps theo nội dung). (quan trọng: tool đặt uncertainty vào phép trừ)
* **Required Time = 9800 ps**: tính bằng `Capture - OutputDelay - Uncertainty` → `20000 - 10000 - 200 = 9800`. Đây là *thời điểm tối đa cho dữ liệu phải xuất hiện ở output* để hệ thống bên ngoài không bị muộn.
* **Input Delay = 10000**: vì bạn đặt `external_delay -input $IN_DLY` (IN_DLY = PERIOD/2), tool coi input arrival ban đầu = 10000 ps (thời gian dữ liệu từ nguồn bên ngoài đặt lên input).
* **Data Path = 1715**: tổng delay của logic nội bộ từ cổng input tới cổng output (tổng các `Trans Delay` trong bảng chi tiết).
* **Arrival at endpoint = Input Delay + Data Path = 10000 + 1715 = 11715 ps** (bảng chi tiết cũng cho `Arrival` = 11715).
* **Slack = Required - Arrival = 9800 - 11715 = -1915 ps** → âm có nghĩa là **muộn 1915 ps** → vi phạm.

Tóm lại: dữ liệu từ nguồn bên ngoài đến input lúc 10,000 ps, đi qua logic nội bộ mất 1,715 ps nên ra output lúc 11,715 ps nhưng required phải là ≤ 9,800 ps → muộn 1,915 ps.

---

# B — Tại sao có `clk` khi FPU_unit không có cổng clock?

1. **Bạn đã định nghĩa một clock toàn cục** trước đó trong script:

   ```tcl
   set clock [define_clock -period $PERIOD -name clk [clock_ports] ]
   ```

   * `define_clock` tạo clock tên `clk` và sẽ được tool dùng cho mọi phép kiểm tra timing. Nếu `[clock_ports]` trả về port nào đó thì clock đó được dùng; nếu không, tool vẫn có một clock **logic** để so sánh (genus/STA cần một tham chiếu thời gian để tính Required/Arrival khi bạn đặt external_delay).
2. **Đây không nhất thiết là clock vật lý gắn vào FPU_unit** — nó chỉ là *reference clock* để STA tính toán timing cho external input→output checks (late external delay check). STA dùng clock để hỏi “nếu design này hoạt động trong hệ thống có clock period X, thì output phải có trước thời điểm capture = period - output_delay - uncertainty”.
3. **Kết luận:** bạn có thể không có flop nào (không có cổng clk trong FPU), nhưng vì bạn định nghĩa clock trong constraints (để mô phỏng hệ thống) nên STA vẫn báo theo clock đó. Đây là tình huống rất phổ biến với **combinational IP** (FPU) mà vẫn kiểm tra I/O timing relative to a system clock.

---

# C — Cách debug & cách sửa (câu lệnh cụ thể)

## 1) Kiểm tra clock/ports nào được dùng

```tcl
# xem clock được tạo và các thuộc tính
get_clocks
report_clocks

# xem [clock_ports] mở rộng thành gì (nếu là biến)
puts [clock_ports]
```

Hoặc liệt kê các ports:

```tcl
report_ports -no_header -details
```

## 2) Xem kỹ path & kiểm tra types

```tcl
# show path full with delays
report_timing -from [get_ports i_32_a[29]] -to [get_ports o_32_s[23]] -npaths 5 -path_type full

# hoặc xem các violations
report_checks -type timing -only_violations
```

## 3) Nếu FPU là **chỉ combinational** và bạn không muốn STA so sánh với clock:

* **Nếu FPU thực tế KHÔNG được clocked trong hệ (không có register nội bộ)**: bạn có 2 lựa chọn

### (A) Đổi cách kiểm tra I/O (không dùng external_delay/clock) — ví dụ bạn không cần timing check:

```tcl
# đánh dấu toàn bộ I/O path là false path (nếu bạn muốn tắt kiểm tra timing I/O)
set_false_path -from [all_inputs] -to [all_outputs]
```

### (B) Nếu FPU được sử dụng trong hệ có clock nhưng thời điểm input/output khác (thời gian ngoại biên khác):

* Chỉnh **external_delay** cho đúng thời gian thực hệ (không để half-cycle mặc định nếu đó không phù hợp).

```tcl
external_delay -clock clk -input 5000 -name delay_in [all_inputs]
external_delay -clock clk -output 5000 -name delay_out [all_outputs]
# điều chỉnh cho phù hợp với timing của subsystem
```

## 4) Nếu FPU được dùng trong hệ đồng bộ (muốn pass timing):

* Cần giảm Data Path delay 1715 ps (tối ưu synth) hoặc tăng Required time bằng cách:

  * Tăng clock period (bigger PERIOD), hoặc
  * Giảm output_delay (nếu output device chấp nhận muộn hơn), hoặc
  * Tối ưu netlist: thêm pipeline/register trong FPU để chia path.

Câu lệnh tham khảo:

```tcl
# tăng period (ví dụ 25 ns)
set FREQ_GHz 0.04
# hoặc đánh dấu path false nếu không cần
set_false_path -from [get_ports i_32_a] -to [get_ports o_32_s]
```

## 5) Kiểm tra cụ thể các delay ở bảng chi tiết

* Bảng chi tiết liệt kê từng cell + delay; bạn có thể xem cell có delay lớn ở đâu (vd. MXI2XLLVT 49 ps, một số CLKXOR 87 ps...) — nếu có cell quá lớn, cân nhắc alternative cell hoặc restructure code để giảm logic depth.

## 6) Nếu bạn muốn giữ thiết kế combinational nhưng chỉ test functional:

* Không define clock; hoặc tạm thời bỏ `define_clock` khi synth/generate netlist cho IP độc lập.

---

# Kết luận ngắn gọn (cho bạn copy vào report)

* Vi phạm xảy ra vì **arrival time ở output = 11,715 ps** (từ input external 10,000 + data path 1,715) trong khi **required = 9,800 ps** → slack = −1,915 ps → **muộn 1.915 ns**.
* `clk` xuất hiện vì bạn đã định nghĩa clock toàn cục (constraint) — STA dùng clock đó để so sánh external I/O timing ngay cả khi FPU bản thân không có cổng clock.
* Cách xử lý: (1) điều chỉnh external delays cho đúng hệ hoặc (2) đánh dấu false_path nếu không cần check, hoặc (3) tối ưu/pipepline thiết kế để giảm data path delay, hoặc (4) tăng period.

---

Nếu bạn muốn mình làm tiếp **một trong** các việc sau (một bước cụ thể, mình sẽ làm ngay trong reply):

* Chạy các lệnh `report_timing` và format output (mô phỏng) — mình sẽ viết chính xác câu lệnh và giải thích kết quả mong đợi.
* Viết các lệnh Tcl để mark false paths chỉ cho cổng I/O cụ thể.
* Gợi ý nơi nên chèn pipeline/register trong RTL (nhận diện khoảng nào có nhiều gate stages dựa trên báo cáo).

Bạn chọn tiếp phương án nào nhé — mình sẽ đưa lệnh & ví dụ ngay.
