#include<stdio.h>
int main(void)
{
    int N;
    int i;
    printf("Enter N:");
    scanf("%d", &N);
    for(i=N; i>=1; i--)
    {
        printf("%d\n", i);
    }
    printf("Liftoff!");
    return 0;
}