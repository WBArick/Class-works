#include<stdio.h>
#include<ctype.h>
#include<string.h>
void toUppercase(char str[]);
int main(void)
{
    char s[10];
    printf("Enter a word:");
    scanf("%s", s);
    printf("Before:\n");
    printf("%s\n", s);
    printf("After:\n");
    toUppercase(s);
    printf("%s", s);
    return 0;
}
void toUppercase(char str[])
{
    int i; 
    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
}