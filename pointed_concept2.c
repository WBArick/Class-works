#include<stdio.h>
int main(void)
{
    int age = 20;
    int *p;
    p = &age;
    printf("Before: Age  = %d\n", age);
    *p = 99;
    printf("After changing it by pointer: Age = %d\n", age);
    return 0;
}