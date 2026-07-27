#include<stdio.h>
int main(void)
{
    int N=5;
    int i;
    int j;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<= N-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i -1; j++)
        {
            if(i==N || j==2*i -1 || j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}