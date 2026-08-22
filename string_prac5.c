#include<stdio.h>
int main(void)
{
    char name[] = "NSU";
    puts(name);
    printf("\n");
    int i;
    for(i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    return 0;
}