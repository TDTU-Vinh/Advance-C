                    STRUCT - UNION

1. Struct
   Bộ nhớ: Mỗi biến có vùng nhớ riêng
   Kích thước: ít nhất bằng tổng kích thước của các phân tử trong struct
   Truy cập đồng thời: Có thể truy cập tất cả thành viên cùng lúc.
   Ứng dụng: Lưu trữ dữ liệu cần sử dụng đồng thời.
   Hiệu suất: Tốn nhiều bộ nhớ hơn.
2. Union
   Bộ nhớ: Tất cả phần tử dùng chung một vùng nhớ.
   Kích thước: Kích thước của phần tử lớn nhất.
   Truy cập đồng thời: Tại một thời điểm, chỉ một phần tử được truy cập.
   Ứng dụng: Lưu trữ giá trị dữ liệu tại một thời điểm
   Hiệu suất: Tiết kiệm bộ nhớ.

3. Data Alignment (Căn chỉnh dữ liệu)
   Căn chỉnh dữ liệu là quy tắc mà dữ liệu được lưu trữ trong bộ nhớ sao cho địa chỉ bắt đầu của một biến phù hợp với các yêu cầu căn chỉnh của phần cứng.
   Đặc điểm:
   Địa chỉ của biến thường là bội số của kích thước kiểu dữ liệu .
   Điều này giúp CPU truy cập dữ liệu nhanh hơn vì các bộ xử lý thường đọc dữ liệu theo khối .

4. Data Padding (Đệm dữ liệu)
   Data Padding là các byte đệm được thêm vào giữa các thành viên trong cấu trúc (hoặc ở cuối cấu trúc) để đảm bảo mỗi thành viên tuân theo quy tắc căn chỉnh.
   Mục đích: Đảm bảo căn chỉnh bộ nhớ cho các thành viên trong cấu trúc, giúp CPU truy xuất dữ liệu hiệu quả hơn.
   Tác dụng phụ: Làm tăng kích thước tổng thể của cấu trúc.
