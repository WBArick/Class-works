#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter a lowercase alphabet:");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.", ch);
            break;
        default:
            printf("%c is a consonant.", ch);
            break;    
    }
    return 0;
}