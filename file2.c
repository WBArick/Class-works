#include<stdio.h>
int main(void)
{
    FILE *fp;
    int id;
    char name[10];
    double gpa;
    fp = fopen("scores.txt", "r");
    if(fp == NULL)
    {
        printf("Error: could not open file for writing.\n");
        return 1;
    }
    while(fscanf(fp, "%d %s %lf\n", &id, name, &gpa) == 3)
    {
        printf("Id = %d Name = %-10s GPA = %.2f\n", id, name, gpa);
    }
    fclose(fp);
    return 0;
}