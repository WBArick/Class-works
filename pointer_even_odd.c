#include<stdio.h>
#include<stdlib.h>
void digit_stats(int n, int *evenp, int *oddp);
int main(void)
{
    int N;
    int even;
    int odd;
    printf("Enter N:");
    scanf("%d", &N);
    digit_stats(N, &even, &odd);
    printf("Number of even numbers are: %d\n", even);
    printf("Number of odd numbers are: %d", odd);
    return 0;
}
void digit_stats(int n, int *evenp, int *oddp)
{
    int i;
    *evenp = 0;
    *oddp = 0;
    n = abs(n);
    if(n ==0)
    {
        *evenp = 1; //Because zero is an even number;
        return;
    }
    while(n>0)
    {
        int digit = n % 10;
        if(digit % 2 == 0)
        {
            *evenp = *evenp + 1;
        }
        else 
        {
            *oddp = *oddp + 1;
        }
        n = n/10;
    }
}