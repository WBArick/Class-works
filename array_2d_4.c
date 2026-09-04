#include<stdio.h>
#define COLS 4
double row_sum(const double a[][COLS], int r, int c);
double total_sum(const double a[][COLS], int r, int c);

int main(void)
{
    double a[3][COLS] = {
        {12.65,89.4,53.43,24},
        {132,42.43,53.53,41},
        {39.42,64.75,52.65,73.52},
    };
    double sum = row_sum(a, 3, COLS);
    double total = total_sum(a, 3, COLS);
    printf("Sum of one row = %.2f", sum);
    printf("\nSum of all elements = %.2f", total);
    return 0;
}

double row_sum(const double a[][COLS], int r, int c)
{
    double sum = 0;
    for(int i = 0; i < c; i++)
    {
        sum = a[0][i] + sum;
    } 
    return sum;
}

double total_sum(const double a[][COLS], int r, int c)
{
    double total = 0;
    int i, j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            total = total + a[i][j];
        }
    }
    return total;
}