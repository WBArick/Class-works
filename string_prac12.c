#include<stdio.h>
#include<string.h>
int main(void)
{
    char firstName[10];
    char lastName[10];
    printf("Enter first name:");
    scanf("%s", &firstName);
    printf("Enter last name:");
    scanf("%s", lastName);
    strcat(lastName, firstName);
    printf("%s", lastName);
    return 0;
}