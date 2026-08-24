#include<stdio.h>
int main(void)
{
    int matrix[3][3];
    int i, j, k;
    int saddle_col = -1;
    int saddle_row = -1;    
    printf("Enter the matrix: ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        int min = matrix[i][0];
        int min_col = 0;
        for(j = 1; j < 3; j++)
        {
            if(min > matrix[i][j])
            {
                min = matrix[i][j];
                min_col = j;
            }
        }
        int saddle = 1;
        for(k = 0; k < 3; k++)
        {
            if(matrix[k][min_col] > min)
            {
                saddle = 0;
            }
        }
        if(saddle == 1)
        {
            saddle_row = i;
            saddle_col = min_col;
            break;
        }
    }
    if(saddle_row != -1)
    {
        printf("saddle point: value = %d at row %d, col %d", matrix[saddle_row][saddle_col], saddle_row, saddle_col);
    }
    else 
    {
        printf("No saddle point");
    }
    return 0;
}