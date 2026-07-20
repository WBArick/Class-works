#include<stdio.h>
int main(void)
{
    int N;
    int i;
    int s=0;
    printf("Enter N:");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        s = s + i;
    }
    printf("Sum = %d", s);
    return 0;
}