#include <stdio.h>
#include <stdlib.h>

int main()
{

    int value = 5;
    int test = 8;
    int const *ptr_const = &value;

    //*ptr_const = 7; // wrong

    printf("value: %d\n", *ptr_const);
    value = 9;
    printf("value: %d\n", *ptr_const);

    // ptr_const = &test; // right
    ptr_const = &test;
    printf("value: %d\n", *ptr_const);
    test = 10;
    printf("value: %d\n", *ptr_const);

    return 0;
}