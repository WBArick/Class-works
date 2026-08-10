#include<stdio.h>
int main(void)
{
    int a[3][4] = {
        {11,12,13,14},
        {21,22,23,24},
        {31,32,33,34},
    };
    int i, j;
    int sum = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("Sum = %d", sum);
    return 0;
}