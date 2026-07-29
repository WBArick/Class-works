#include<stdio.h>
int main(void)
{
    int N;
    int i;
    printf("Enter the number of integers: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        int a, b;
        printf("Enter two numbers:");
        scanf("%d %d", &a, &b);
        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a==b)
        {
            printf("=\n");
        }
        
    }
    return 0;
}
