#include<stdio.h>
#define SENTINEL 0
int main(void)
{
    int N;
    int s=0;
    printf("Enter a number (0 to stop):");
    scanf("%d", &N);
    s = s + N;
    while(N != SENTINEL)
    {
        printf("Enter a number (0 to stop):");
        scanf("%d", &N);
        s = s + N;

    }
    printf("Total = %d", s);
    return 0;
}