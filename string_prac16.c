#include<stdio.h>
int main(void)
{
    char w[10];
    int length = 0;
    int i;
    printf("Enter a word:");
    scanf("%s", w);
    while(w[length] != '\0')
    {
        length++;
    }
    for(i = 0; i < length; i++)
    {
        if(w[i] >= 'A' && w[i] <= 'Z')
        {
            w[i] +=32;
        }
        printf("%c", w[i]);
    }
    return 0;
}