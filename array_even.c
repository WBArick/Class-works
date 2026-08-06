#include<stdio.h>
#define SIZE 10
int main(void)
{
    int array[SIZE];
    int i;
    printf("Enter %d integer values:", SIZE);
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    int even = 0;
    int j;
    for(j=0; j<SIZE; j++)
    {
        if(array[j] % 2 == 0)
        {
            even = even + 1;
        }
    }
    printf("%d of them are even numbers", even);
    return 0;
}