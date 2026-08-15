#include<stdio.h>
struct person
{
    double salary;
    int age;
};
int main(void)
{
    struct person p1;
    p1.salary = 97785.23;
    p1.age = 26;
    printf("Age of person1 is %d\n", p1.age);
    printf("Salary of person1 is %.2lf\n", p1.salary);
    struct person p2;
    p2.salary = 123864.5675;
    p2.age = 31;
    printf("Age of person2 is %d\n", p2.age);
    printf("Salary of person2 is %.2lf\n", p2.salary);
    return 0;
}