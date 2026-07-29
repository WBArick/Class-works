#include<stdio.h>
int main(void)
{
    int N;
    int i;
    printf("Enter the number of test cases:");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        int a, b, c;
        printf("Enter the salary of three employees:");
        scanf("%d %d %d", &a, &b, &c);
        if(a>b && a>c)
        {
            if(b>c)
            {
                printf("%d\n", b);
            }
            else
            {
                printf("%d\n", c);
            }
        }
        else if(b>a && b>c)
        {
            if(a>c)
            {
                printf("%d\n", a);
            }
            else
            {
                printf("%d\n", c);
            }
        }
        else if(c>a && c>b)
        {
            if(a>b)
            {
                printf("%d\n", a);
            }
            else 
            {
                printf("%d\n", b);
            }
        }
    }
    return 0;
}