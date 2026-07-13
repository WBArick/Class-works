#include<stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter three values:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(c>a)
        {
            printf("%d is the middle value.", a);
        }
        else if(c<b)
        {
            printf("%d is the middle value.", b);
        }
        else
        {
            printf("%d is the middle value.", c);
        }
    }
    else
    {
        if(c>b)
        {
            printf("%d is the middle value.", b);
        }
        else if(a>c)
        {
            printf("%d is the middle value.", a);
        }
        else
        {
            printf("%d is the middle value.", c);
        }

    }
    return 0;
}