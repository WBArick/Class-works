#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char s[] = "I want to get cg four in cse 115";
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }
    puts(s);
    printf("The digits in this strings are: ");
    for(i = 0; s[i] != '\0'; i++)
    {
        if(isdigit(s[i]) == 1)
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}