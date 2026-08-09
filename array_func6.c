#include<stdio.h>
int countOccurrences(int arr[], int size, int target);
int main(void)
{
    int values[8] = {67, 98, 43, 67, 67, 32, 10, 45};
    int count = countOccurrences(values, 8, 67);
    printf("Target number occurrence = %d\n", count);
    return 0;
}
int countOccurrences(int arr[], int size, int target)
{
    int count = 0;
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            count = count + 1;
        }
    }
    return count;
}