#include<stdio.h>
#include<string.h>
int main(void)
{
    char words[5][20];
    int i;
    int j;
    char temp[15];
    printf("Enter 5 words:");
    for(i = 0; i < 5; i++)
    {
        scanf("%s", words[i]);
    }
    for(i = 0; i < 5 - 1; i++)
    {
        for(j = 0; j < 5 - 1 - i; j++)
        {
            if(strcmp(words[j], words[j+1]) == 1)
            {
                strcpy(temp, words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j + 1],temp);
            }
        }
    }
    printf("Sorted list:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%s\n", words[i]);
    }
    return 0;
}