#include<stdio.h>
int main(void)
{
    int a[2][3];
    int i, j;
    printf("Enter the matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix is given below:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}