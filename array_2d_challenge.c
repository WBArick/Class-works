#include<stdio.h>
int main(void)
{
    int a[2][2] = {
        {45, 67},
        {89, 31},
    };
    int b[2][2] = {
        {56, 31},
        {71, 16},
    };
    int c[2][2];
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("First matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    printf("Third matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}