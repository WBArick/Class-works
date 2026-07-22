#include<stdio.h>
int is_even(int n);
int main(void)
{
    int N;
    int i;
    int count=0;
    printf("Enter N: ");
    scanf("%d", &N);
    for(i = 1; i<=N; i++)
    {
        count = count + is_even(i);
    }
    printf("Number of even numbers from 1 to %d = %d", N, count);
    return 0;
}
int is_even(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}