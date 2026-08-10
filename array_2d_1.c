#include<stdio.h>
int main(void)
{
    int a[3][3] = {
        {67, 9, 11},
        {10, 7, 98},
        {34, 59, 72},
    };
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}