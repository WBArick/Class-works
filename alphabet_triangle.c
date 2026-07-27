#include<stdio.h>
int main(void)
{
    int N=5; 
    int i;
    int j;
    char ch='A';
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            
            printf("%c", ch++);
            
        }
        ch='A';
        printf("\n");
    }
    return 0;
}