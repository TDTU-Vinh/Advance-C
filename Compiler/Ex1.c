/*----------------------------------------------------------------------
Compiler là quá trình biên dịch của hệ thống gồm 4 quá trình chính:
1. Quá trình tiền xử lý (preprocessor)
    - Quá trình này sẽ thực hiện xử lý các việc như copy các thư viện file bỏ vào, thay thế các macro bên trong file.
    - Xóa bỏ các comment (chú thích) của chương trình
    syntax(gcc): gcc -E Ex1.c -o Ex1.i (đầu vào là file .c .h .cpp .... đầu ra là file .i khi sử dụng gcc)
    => chuyển đổi các file có đuôi .c .h .cpp ... thành file .i (.ii ....)

2. Quá trình biên soạn (compilation/Compilation) - công đoạn dịch ngôn ngữ bậc cao sang bậc thấp
    - Quá trình này sẽ thực hiện xử lý chuyển đổi biên dịch các câu lệnh (code) của chúng ta thành ngôn ngữ bậc thấp hơn gần với ngôn ngữ máy là assembly
    - Assembly là ngôn ngữ bậc thấp gần với ngôn ngữ với vi xử lý.
    syntax(gcc): gcc -s Ex1.i -o Ex1.s (đầu vào là file .i đầu ra là file .s khi sử dụng gcc)
    => chuyển đổi các file có đuôi .i (.ii ...) thành file  .s

3. Quá trình dịch ngôn ngữ (Assembler)
    - Quá trình này sẽ thực hiện xử lý chuyển đổi biên dịch ngôn ngữ Assembly sang ngôn ngữ mà máy có thể hiểu được (0 và 1)
    syntax(gcc): gcc -c Ex1.i -o Ex1.o (đầu vào là file .as đầu ra là file .o khi sử dụng gcc)
    => chuyển đổi các file có đuôi .s ... thành file  .o

4. Linker
    - Quá trình này sẽ thực hiện các công việc như liên kết các file lại với nhau để tạo ra một chương trình duy nhất.

----------------------------------------------------------------------*/
#include <stdio.h>   

int main()
{
    printf("Hello World");
    return 0;
}
