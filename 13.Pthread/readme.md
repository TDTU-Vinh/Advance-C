Đặt vấn đề : Giả sử chương trình thực hiện hai tác vụ liên tục(task1, task2), nếu đặt trong while (1) thì thực hiện tuần tự, task1 thực hiện xong thì mới thực hiện task2.Muốn cả 2 tác vụ trên thực thi song song với nhau thì làm thế nào ?

Khái niệm
- Thread (luồng) là đơn vị thực thi nhỏ nhất của một tiến trình. Mỗi tiến trình có thể chứa nhiều thread, và các thread này chạy song song với nhau.
- Các thread trong cùng tiến trình chia sẻ tài nguyên với nhau nhưng sẽ có stack và bộ đếm chương trình riêng biệt.

Thư viện Pthread
- Pthread (POSIX Threads) là thư viện tiêu chuẩn cho lập trình đa luồng trong C/C++:
- Giúp bạn viết các chương trình có thể thực hiện nhiều tác vụ cùng lúc bằng cách chạy nhiều luồng (threads) song song. Điều này đặc biệt hữu ích trên các hệ thống có nhiều bộ xử lý hoặc bộ xử lý nhiều nhân, vì mỗi luồng có thể được phân bố cho các nhân khác nhau để chạy.
  Xử lý nhiều công việc cùng lúc, giúp tăng tốc độ xử lý và phân tán công việc hiệu quả hơn.


