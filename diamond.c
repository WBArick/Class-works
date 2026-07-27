#include<stdio.h>
int main(void)
{
    int N;
    int i;
    int j;
    printf("Enter N:");
    scanf("%d", &N);
    for(i =1; i <= N-1; i++)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}