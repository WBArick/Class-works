#include<stdio.h>
int main(void)
{
    int N;
    int m;
    int multi;
    printf("Enter the number:");
    scanf("%d", &N);
    for(m=1; m<11; m++)
    {
        multi = N * m;
        printf("%d x %d = %d\n", N, m, multi);
    }
    return 0;
}