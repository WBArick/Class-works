#include<stdio.h>
#include<string.h>
int main(void)
{
    char original[20];
    char copy[20];
    printf("Enter a word:");
    scanf("%s", &original);
    strcpy(copy, original);
    copy[0] = 'X';
    puts(original);
    puts(copy);
    return 0;
}