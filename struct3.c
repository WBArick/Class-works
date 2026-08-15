#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int age;
    double cg;
};
int main(void)
{
    struct student number[5];
    int i;
    int best = 0;
    for(i = 0; i < 5; i++)
    {
        printf("      Info of student No. %d        \n", i);
        printf("Enter name: ");
        scanf("%s", number[i].name);
        printf("Enter age: ");
        scanf("%d", &number[i].age);
        printf("Enter cg: ");
        scanf("%lf", &number[i].cg);
    }
    for(i = 1; i < 5; i++)
    {
        if(number[i].cg > number[best].cg)
        {
            best = i;
        }
    }
    printf("Best student------\n");
    printf("Name: %s\n", number[best].name);
    printf("CG : %.2f", number[best].cg);
    return 0;
}