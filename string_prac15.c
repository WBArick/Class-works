#include<stdio.h>
int main(void)
{
    char w[10];
    int i, n = 0;
    printf("Enter a word:");
    scanf("%s", w);
    for(i = 0; i <= 10; i++)
    {
        if(w[i] >= 'A' && w[i] <= 'Z')
        {
            n++;
        }
        if(w[i] >= 'a' && w[i] <= 'z')
        {
            n++;
        }
    }
    for(i = n-1; i>= 0; i--)
    {
        printf("%c", w[i]);
    }
    return 0;
}