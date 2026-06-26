#include<stdio.h>
int main()
{
    int a,b;
    int s, d, pro, quo, re;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("\nSum = %d\n", s=a+b);
    printf("Difference = %d\n", d=a-b);
    printf("Product = %d\n", pro=a*b);
    printf("Quotient = %d\n", quo=a/b);
    printf("Remainder = %d\n", re=a%b);
    return 0;
}