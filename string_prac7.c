#include<stdio.h>
int main(void)
{
    char s[5];
    printf("Enter a vowel:");
    scanf("%s", &s);
    if(s[0] == 'a' || s[0]== 'e'|| s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
    {
        printf("Lowercase");
    }
    else if(s[0] == 'A' || s[0] == 'E' || s[0] == 'I' || s[0] == 'O' || s[0] == 'U')
    {
        printf("Uppercase");
    }
    return 0;
}