#include<stdio.h>
int main(void)
{
    int numb1;
    printf("Enter a number:");
    scanf("%d", &numb1);
    if(numb1>0)
    {
        printf("%d is Positive.", numb1);
    }
    else if(numb1<0)
    {
        printf("%d is Negative.", numb1);
    }
    else
    {
        printf("The number is zero");
    }
    return 0;
}