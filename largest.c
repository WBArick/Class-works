#include<stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The largest number is %d", a);
        }
        else
        {
            printf("The largest number is %d", c);
        }
    }
    else if(b>c)
    {
        printf("The largest number is %d", b);
    }
    else
    {
        printf("The largest number is %d", c);
    }
    return 0;
}