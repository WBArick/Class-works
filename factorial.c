#include<stdio.h>
int main(void)
{
    int n;
    long long accumulator=1;
    int count;
    printf("Enter the number:");
    scanf("%d", &n);
    for(count=1; count<=n; count++)
    {
        accumulator = count * accumulator;
    }
    printf("Factorial of the number = %lld", accumulator);
    return 0;
}