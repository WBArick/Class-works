#include<stdio.h>
int main(void)
{
    int N=5;
    int i;
    int j;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==N)
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