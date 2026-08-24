#include<stdio.h>
#include<string.h>
int countOccurences(char str[], char target);
int main(void)
{
    char w[15];
    char target;
    printf("Enter a word:");
    scanf("%s", w);
    printf("Enter the target character:");
    scanf(" %c", &target);
    int result = countOccurences(w, target);
    printf("The character '%c' occured %d times in the character.", target, result);
    return 0;
}

int countOccurences(char str[], char target)
{
    int i;
    int count = strlen(str);
    int occur = 0;
    for(i = 0; i < count; i++)
    {
        if(str[i] == target)
        {
            occur++;
        }
    }
    return occur;
}