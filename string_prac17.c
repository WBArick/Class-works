#include<stdio.h>
int main(void)
{
    char w[10];
    char re[10];
    int len = 0;
    int i;
    int j = 0;
    int result;
    printf("Enter a word:");
    scanf("%s", w);
    while(w[len] != '\0')
    {
        len++;
    }
    for(i = len - 1; i >= 0; i--)
    {
        re[j] = w[i];
        j++;
    }
    re[j] = '\0';
    for(i = 0; i < len; i++)
    {
        if(re[i] == w[i])
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }  
    if(result == 1)
    {
        printf("YES");
    }
    else if(result == 0)
    {
        printf("NO");
    }
    return 0;
}