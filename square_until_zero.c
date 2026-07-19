#include<stdio.h>
int main(void)
{
    int N;
    int sum=0;
    int s;
    int i=1;
    do
    {
        printf("Enter the number:");
        scanf("%d", &N);
        if(N==0)
        {
            break;
        }
        else
        {
           s= N * N;
           printf("Square of %d = %d\n", N, s);
           sum = sum+N;
           i++;
        }   
    }while(N !=0);
    printf("%d numbers were entered.\n", i);
    printf("Sum = %d", sum);
    return 0;
}