#include<stdio.h>
#define row 3
#define col 3
int main(void)
{
    int og[row][col];
    int transposed[col][row];
    int i;
    int j;
    printf("Enter the matrix:");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &og[i][j]);
        }
    }
    printf("Orignal:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%4d", og[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            transposed[i][j] = og[j][i];
        }
    }
    printf("Transposed:\n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%4d", transposed[i][j]);
        }
        printf("\n");
    }
    return 0;
}