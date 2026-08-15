#include<stdio.h>
struct student
{
    char name[50];
    int age;
    double cg;
};
struct student findbest(struct student arr[], int size)
{
    int i;
    int best = 0;
    for(i = 1; i < size; i++)
    {
        if(arr[i].cg > arr[best].cg)
        {
            best = i;
        }
    }
    return arr[best];
}
int main(void)
{
    struct student number[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("         Information of student %d          \n", i);
        printf("Enter name : ");
        scanf("%s", number[i].name);
        printf("Enter age : ");
        scanf("%d", &number[i].age);
        printf("Enter cgpa : ");
        scanf("%lf", &number[i].cg);
    }
    struct student top =  findbest(number, 5);
    printf("The Best student------\n");
    printf("Name: %s\nAge: %d\nCG: %.2f\n", top.name, top.age, top.cg);
    return 0;
}