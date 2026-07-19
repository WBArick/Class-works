#include<stdio.h>
int main(void)
{
    int mark;
    int sum=0;
    do
    {
        printf("Enter mark:");
        scanf("%d", &mark);
        if(mark>=0 && mark<=100)
        {
            sum=sum+mark;
        }
    }while (mark>=0 && mark<=100);
    printf("Sum = %d", sum);
    return 0;
    
}