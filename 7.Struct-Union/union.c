#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data d;
    d.i = 10;
    printf("i: %d\n", d.i); // i: 10
    d.f = 3.14;
    printf("f: %f\n", d.f); // f: 3.14 (i bị ghi đè)
    return 0;
}
