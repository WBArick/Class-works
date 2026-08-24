#include<stdio.h>
int main(void)
{
    FILE *fp;
    fp = fopen("scores.txt", "w");
    if(fp == NULL)
    {
        printf("Error: could not open file for writing.\n");
        return 1;
    }
    fprintf(fp, "%d %s %.2f\n", 101, "Alice", 3.75);
    fprintf(fp, "%d %s %.2f\n", 102, "Bob", 3.90);
    fclose(fp);
    printf("Data written to scores.txt\n");
    return 0;
}