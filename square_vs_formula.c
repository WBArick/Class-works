#include<stdio.h>
int main(void)
{
    int N;
    int square=0;
    int formula=0;
    int i;
    printf("Enter N:");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        square = (i*i) + square;
    }
    formula = (N* (N+1)* ((2*N) + 1)) / 6;
    printf("Square using loop = %d", square);
    printf("\nSquare using formula = %d", formula);
    return 0;
}