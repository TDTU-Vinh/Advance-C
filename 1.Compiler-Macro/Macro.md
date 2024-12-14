1.  #include : chỉ thị bao hàm tệp

    - cách sử dụng:
      - Thêm, tái sử dụng các nội dung các tệp và file mã nguồn mong muốn được sử dụng để đưa vào chương trình
      - Phân chia các các tệp mã nguồn (code, thư viện) giúp việc quản lý hiệu quả hơn

2.  #define, #undef : chỉ thị định nghĩa, hàm, hằng số hoặc bất kỳ đoạn mã nào sẽ được thay thế trong quá trình tiền xử lý

    - cách sử dụng:
      - Dùng để thay thế chuỗi mã nguồn được định nghĩa trong quá trình tiền xử lý.

3.  #if, #elif, #else, #ifdef, #ifndef : dùng để kiểm tra điều kiện
    #define
    Dùng để thay thế một chuỗi mã nguồn bằng một chuỗi khác trước khi chương trình biên dịch.
    Giúp giảm lặp lại mã, dễ bảo trì chương trình.

        #undef
            Dùng để hủy định nghĩa của một macro đã được định nghĩa trước đó bằng #define

        #if, #elif, #else
            Dùng để kiểm tra điều kiện

        #ifdef, #ifndef
            #ifdef dùng để kiểm tra một macro đã được định nghĩa hay chưa, nếu macro đã được định nghĩa thì mã nguồn sau #ifdef sẽ được biên dịch.
            #ifndef dùng để kiểm tra một macro đã được định nghĩa hay chưa, nếu macro chưa được định nghĩa thì mã nguồn sau #ifndef sẽ được biên dịch
