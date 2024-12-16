#include <stdio.h>

/*
Hiện tại đang sử dụng hệ điều hành 32 bits nên con trỏ hiện tại sẽ là 4 bytes 
Nếu chúng ta sử dụng hệ điều hành hay kiến trúc vi xử lý lên đến 64 bits thì con trỏ của chúng ta sẽ là 8 bytes 
*/

int main()
{
    int *pointer;
    int a = 100;

    printf("kich thuoc cua a: %d\n",sizeof(a)); /*kich thuoc cua bien a*/
    printf("kich thuoc con tro: %d\n",sizeof(pointer));/*kich thuoc cua con tro pointer dua tren he dieu hanh 32bits*/
    printf("Dia chi cua bien a: %p\n",&a);/*dia chi cua bien a*/
    printf("Dia chi cua pointr: %p\n",&pointer);/*dia chi cua con tro*/

    pointer = &a;
    printf("Dia chi cua bien a: %p\n",&a);/*dia chi cua bien a*/
    printf("Dia chi cua pointr: %p\n",pointer);/*dia chi cua con tro sau khi con tro truy cap vao bien a*/
    printf("Gia tri cua con tro: %d\n",*pointer); 

    return 0;
}