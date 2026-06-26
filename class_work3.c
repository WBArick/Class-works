#include<stdio.h>
int main()
{
    char c1;
    char c2;
    char c3;
    printf("Enter the first character:");
    scanf("%c", &c1);
    printf("Enter the second character:\n");
    scanf(" %c", &c2);
    printf("Enter the third character:\n");
    scanf(" %c", &c3);
    printf("%c %c %c", c3, c2, c1);
    return 0;
}