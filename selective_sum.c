#include<stdio.h>
int main(void)
{
    int N;
    int count;
    int sum=0;
    printf("Enter the number:");
    scanf("%d", &N);
    for(count=1; count < N; count++)
    {
        if(count%3==0 || count%5==0)
        {
            sum=sum+count;
        }
        else
        {
            continue;
        }
    }
    printf("Sum = %d", sum);
    return 0;
}