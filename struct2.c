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
    struct student s1;
    strcpy(s1.name, "Noxious");
    s1.age = 20;
    s1.cg = 3.94;
    printf("Name of the student: %s\n", s1.name);
    printf("Age : %d\n", s1.age);
    printf("CG : %.2f\n", s1.cg);
    return 0;
}