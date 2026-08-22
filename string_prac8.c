#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[10];
    char str[10];
    int c1;
    int c2;
    printf("Enter a word:");
    scanf("%s", &s);
    printf("Enter another word:");
    scanf("%s", &str);
    c1 = strlen(s);
    c2 = strlen(str);
    if(c1 == c2)
    {
        printf("Equal length");
    }
    else if(c1 > c2)
    {
        printf("First word is bigger");
    }
    else if(c1 < c2)
    {
        printf("Second word is bigger");
    }
    return 0;
}