#include<stdio.h>
void add_to_total(int *total, int amount);
int main(void)
{
    int total=0;
    int i;
    for(i=1; i<=5; i++)
    {
        add_to_total(&total, i);
    }
    printf("Total = %d", total);
    return 0;
}
void add_to_total(int *total, int amount)
{
    *total = *total + amount;
}