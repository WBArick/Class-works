#include<stdio.h>
int main(void)
{
    int N;
    int i, j, k=1;
    printf("Enter N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}