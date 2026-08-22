#include<stdio.h>
#include<string.h>
int main(void)
{
    char sentence[50], word[10], *result;
    printf("Enter a sentence:");
    gets(sentence);
    printf("Enter the target word:");
    gets(word);
    result = strstr(sentence, word);
    if(result != NULL)
    {
        printf("%s was found", word);
    }
    else 
    {
        printf("%s was not found", word);
    }
    return 0;
}