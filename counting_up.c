#include<stdio.h>
int main(void)
{
    int N;
    int a=0;
    printf("Enter the positive integer:");
    scanf("%d", &N);
    while(a<N)
    {
        a=a+1;
        printf("%d\n", a);
    }
    return 0;
}