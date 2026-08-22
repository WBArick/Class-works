#include<stdio.h>
#include<string.h>
int main(void)
{
    char w1[10];
    char w2[10];
    printf("Enter a word:");
    scanf("%s", &w1);
    printf("Enter another word:");
    scanf("%s", &w2);
    if(strcmp(w1, w2) == 0)
    {
        printf("Both words are equal");
    }
    else if(strcmp(w1, w2) < 0)
    {
        printf("The first comes before the second");
    }
    else if(strcmp(w1, w2) > 0)
    {
        printf("The second comes before the first");
    }
    return 0;
}