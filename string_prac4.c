#include<stdio.h>
#include<string.h>
int main(void)
{
    char date[20];
    printf("Enter a date: ");
    fgets(date, sizeof(date), stdin);
    char *month = strtok(date, " ,");
    char *day = strtok(NULL, " ,");
    char *year = strtok(NULL, " ,");
    puts(month);
    puts(day);
    puts(year);
    return 0;
}