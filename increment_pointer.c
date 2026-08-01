#include<stdio.h>
void increment(int *counter);
int main(void)
{
    int total = 0;
    int count;
    for(count = 1; count <=6; count++)
    {
        increment(&total);
    }
    printf("Total = %d", total);
    return 0;

}
void increment(int *counter)
{
    *counter +=1;
}