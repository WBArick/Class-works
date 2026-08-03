#include<stdio.h>
void squareCube(int n, int *squarep, int *cubep);
int main(void)
{
    int N;
    int sq;
    int cube;
    printf("Enter a number:");
    scanf("%d", &N);
    squareCube(N, &sq, &cube);
    printf("%d^2 = %d\n%d^3 = %d", N, sq, N , cube);
    return 0;
}
void squareCube(int n, int *squarep, int *cubep)
{
    *squarep = n*n;
    *cubep = n*n*n;
}