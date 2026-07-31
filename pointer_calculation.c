#include<stdio.h>
void divide(int a, int b, int *quotient, int *remainder);
int main(void)
{
    int q, r;
    divide(17, 5, &q, &r);
    printf("17 / 5 = %d\n", q);
    printf("17 % 5 = %d\n", r);
    return 0;
}
void divide(int a, int b, int *quotient, int *remainder)
{
    *quotient = a/b;
    *remainder = a%b;
}