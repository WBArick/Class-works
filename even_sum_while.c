#include<stdio.h>
int main(void)
{
    int N;
    int sum=0;
    int a=0;
    printf("Sample: N =");
    scanf("%d", &N);
    while(a<N)
    {
        a= a+2;
        printf("%d\t", a);
        sum = sum + a;
    }
    printf("\nSum = %d", sum);
    return 0;
}