#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    double salary;
    char dept[15];
};
struct Employee findHighestPaid(struct Employee arr[], int size);
int main(void)
{
    int N;
    printf("Enter the number of employees:");
    scanf("%d", &N);
    getchar();
    struct Employee number[N];
    printf("%d employees:\n", N);
    int i;
    for(i = 0; i < N; i++)
    {
        printf("Enter the name:");
        gets(number[i].name);
        printf("Enter salary:");
        scanf("%lf", &number[i].salary);
        getchar();
        printf("Enter department:");
        gets(number[i].dept);
    }
    struct Employee top = findHighestPaid(number, N);
    printf("Highest paid overall: %s (%lf)", top.name, top.salary);
    return 0;
}

struct Employee findHighestPaid(struct Employee arr[], int size)
{
    int i;
    int high = 0;
    int idx;
    for(i = 0; i < size; i++)
    {
        if(arr[i].salary > high)
        {
            high = arr[i].salary;
            idx = i;
        }
    }
    return arr[idx];
}