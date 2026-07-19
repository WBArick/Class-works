#include<stdio.h>
int main(void)
{
    int N;
    int a;
    int s;
    printf("Enter the number:");
    scanf("%d", &N);
    for(a=1; a<(N+1); a++)
    {
        s= a*a;
        printf("Square of %d = %d\n", a, s);
    }
    for(N; N>0; N--)
    {
        printf("%d\t", N);
    }
    return 0;
}