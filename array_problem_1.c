#include<stdio.h>
int main(void)
{
    int arr[50];
    int size;
    int largest = 0;
    int second = 0;
    int smallest = 100;
    int second_small = 100;
    int i, j;
    printf("Enter the number of integers:");
    scanf("%d", &size);
    printf("Enter the numbers:");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    for(i = 0; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            second_small = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_small && arr[i] != smallest)
        {
            second_small = arr[i];
        }
    }
    printf("Second largest = %d\n", second);
    printf("Second smallest = %d\n", second_small);
    return 0;
}