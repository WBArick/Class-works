#include<stdio.h>
int main(void)
{
    int N;
    int i=1;
    printf("Enter N:");
    scanf("%d", &N);
    do
    {
        printf("%d\n", i);
        i++;
    }while(i<=N);
    return 0;
    
}