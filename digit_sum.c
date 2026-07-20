#include<stdio.h>
int main(void)
{
    int N;
    int s=0;
    int digit;
    printf("Enter a number:");
    scanf("%d", &N);
    while(N>0)
    {
        digit = N % 10;
        s = s + digit;
        N = N / 10;
    }
    printf("Sum of digits = %d", s);
    return 0;
}