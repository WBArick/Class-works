#include<stdio.h>
int countPositive(int arr[], int size);
int countNegative(int arr[], int size);
int main(void)
{
    int numbers[8] = {-67, 67, 372, -86, -23, 122, -55, -1};
    int countposi = countPositive(numbers, 8);
    int countnega = countNegative(numbers, 8);
    printf("Number of positive numbers = %d\n", countposi);
    printf("Number of negative numbers = %d\n", countnega);
    return 0;
}
int countPositive(int arr[], int size)
{
    int count = 0;
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] > 0)
        {
            count = count + 1;
        }
    }
    return count;
}
int countNegative(int arr[], int size)
{
    int count = 0;
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            count = count + 1;
        }
    }
    return count;
}