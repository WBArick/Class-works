#include<stdio.h>
#define SECRET 42
int main(void)
{
    int n;
    int i=0;
    do
    {
        printf("Guess a number:");
        scanf("%d", &n);
        if(n>SECRET)
        {
            printf("Lower\n ");
        }
        else if(n<SECRET)
        {
            printf("Higher\n");
        }
        i++;
    }while(n != SECRET);
    printf("You are right!!\nNumber of attempts = %d", i);
    return 0;
    
}