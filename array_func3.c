#include<stdio.h>
#define SIZE 5
int square(int n);
int main(void)
{
    int array[5];
    int i;
    printf("Enter 5 integer values:");
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Square of integers:\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", square(array[i]));
    }
    return 0;
}
int square(int n)
{
    int sq;
    sq = n * n;
    return sq;
}