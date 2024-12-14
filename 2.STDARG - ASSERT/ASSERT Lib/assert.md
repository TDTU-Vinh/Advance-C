Thư viện assert

Cung cấp macro assert.
Macro này được sử dụng để kiểm tra một điều kiện.
Nếu điều kiện đúng (true), không có gì xảy ra và chương trình tiếp tục thực thi.
Nếu điều kiện sai (false), chương trình dừng lại và thông báo một thông điệp lỗi.
Dùng trong debug, dùng #define NDEBUG để tắt debug

- Công dụng để debug những công việc sau
- Lỗi truy cập mảng không an toàn.
- Lỗi chia cho số 0.
- Chia số nguyên cho số nguyên, kết quả là số thực.
