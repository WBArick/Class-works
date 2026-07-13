#include<stdio.h>
char classify_letter(char c);
int main(void)
{
    char ch;
    printf("Enter a lowercase letter:");
    scanf("%c", &ch);
    classify_letter(ch);
    return 0;
}
char classify_letter(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("%c is a vowel.", c);
    }
    else
    {
        printf("%c is a consonant.", c);
    }
    return c;
}