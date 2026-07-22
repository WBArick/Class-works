#include<stdio.h>
int main(void)
{
    int i,j;
    int rows=4;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=3; j++)
        {
           printf("#");
        }
        printf("\n");   
    }

    return 0;
}