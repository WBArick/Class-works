#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[30] = "Hello";
    char b[] = " World";
    strcat(a, b); //strcat appends b directly at the end of a
    printf("%s", a);
    return 0;
}