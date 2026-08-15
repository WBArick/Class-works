#include<stdio.h>
#include<string.h>
int main()
{
    char city1[20]="Dhaka";
    char city2[20]="Sylhet";
    char city3[20]="";
    printf("%s %s %s\n",city1,city2,city3);
    strcpy(city3,city1);
    printf("%s %s %s\n",city1,city2,city3);
    return 0;
}