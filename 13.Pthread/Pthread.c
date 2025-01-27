#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void delay1s()
{
    for (int i = 0; i < 100000000; i++)
        ;
}

void delay3s()
{
    for (int i = 0; i < 300000000; i++)
        ;
}

void task1()
{
    static int count = 0;
    count++;
    printf("Count taks1: %d\t", count);
    delay1s();
}

void task2()
{
    static int count = 0;
    count++;
    printf("Count taks2: %d\n", count);
    delay3s();
}

int main(int argc, char const *argv[])
{

    while (1)
    {
        task2();
        task1();
    }

    return 0;
}
