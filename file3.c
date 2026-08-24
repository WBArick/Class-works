#include<stdio.h>
int main(void)
{
    FILE *fp = fopen("numbers.txt", "w");
    if(fp == NULL)
    {
        printf("Error coult not open file for writing.\n");
        return 1;
    }
    int num;
    int i;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }
    fclose(fp);
    return 0;
}