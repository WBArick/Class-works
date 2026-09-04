#include<stdio.h>
#define COLS 3
void find_max(const double a[][COLS], int r, int c, int *row_p, int *col_p);
int main(void)
{
    double a[2][COLS] = {
        {12.53, 75.65, 86.95},
        {97.69,35.93,64.85},
    };
    int max_r;
    int max_c;
    find_max(a, 2, COLS, &max_r, &max_c);
    printf("Row of the max element = %d\n", max_r);
    printf("Coloum of the max element = %d\n", max_c);
    return 0;
}

void find_max(const double a[][COLS], int r, int c, int *row_p, int *col_p)
{
    double max = a[0][0];
    int i, j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                *row_p = i;
                *col_p = j;
            }
        }
    }
}