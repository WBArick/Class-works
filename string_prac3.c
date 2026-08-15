#include<stdio.h>
#include<string.h>
int main(void)
{
    char full[50];
    char first[10];
    char last[10];
    printf("Enter your first name: ");
    gets(first);
    printf("Enter your last name: ");
    gets(last);
    strcpy(full, first); //Here strcpy is copying the first name and putting it to the full string
    strcat(full, " "); //strcat is putting the space right after full which contains the first name now
    strcat(full, last); //Here strcat is putting the last name right after full which contains the first name and the space now
    printf("Your full name is ");
    puts(full);
    return 0;
}