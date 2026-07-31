#include<stdio.h>
int main(void)
{
    int age = 20;
    int *p;
    p = &age;
    printf("Age = %d\n", age);
    printf("&age = %p\n", &age);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    return 0;
}