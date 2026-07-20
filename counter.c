#include<stdio.h>
int main(void)
{
    int N;
    int i;
    printf("Enter N:");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}