#include<stdio.h>
int main(void)
{
    int a=0;
    int b=1;
    int temp;
    int N;
    int count;
    printf("Enter the numbers of fibonacci:");
    scanf("%d", &N);
    for(count=0; count<N; count++)
    {
        printf("%d,", a);
        
        temp = a+b;
        a=b;
        b=temp; 
    }
    return 0;
}