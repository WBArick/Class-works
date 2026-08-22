#include<stdio.h>
int main(void)
{
    char s[10];
    printf("Enter a string:");
    scanf("%s", &s);
    printf("%s", s);
    int i=0;
    printf("\n");
    printf("The lenght of the string:");
    for(i = 0; s[i] != '\0'; i++)
    {
    }
    printf("%d", i);
    return 0;
}