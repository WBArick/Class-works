#include<stdio.h>
long power(int base, int exp);
int main(void)
{
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);
    printf("%d^%d = %d", b, e, power(b,e));
    return 0;
}
long power(int base, int exp)
{
    int i;
    long result = 1;
    for(i = 1; i<= exp; i++)
    {
        result = result * base;
    }
    return result;
}