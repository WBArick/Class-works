#include<stdio.h>
int main(void)
{
    int i;
    int num;
    int sum=0;
    int avg;
    for(i=1; i<=10; i++)
    {
        printf("Enter a number:");
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum /10;
    printf("Sum = %d", sum);
    printf("\nAverage = %d", avg);

    return 0;
}