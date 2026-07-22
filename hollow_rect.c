#include<stdio.h>
int main(void)
{
    int i;
    int j;
    for(i=1; i<=4; i++)
    {
        printf("*");
        for(j=1; j<=8; j++)
        {
            if(i==1 || i==4 || j==8)
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