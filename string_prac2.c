#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char s[50];
    int i;
    printf("Enter a line: ");
    fgets(s, sizeof(s), stdin);
    for(i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }
    puts(s);
    printf("The digits in this line are: ");
    for(i = 0; s[i] != '\0'; i++)
    {
        if(isdigit(s[i]))
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}