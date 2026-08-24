#include<stdio.h>
int isSorted(int arr[], int size);
int main(void)
{
    int scores[5];
    int i;
    printf("Enter 5 elements:");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &scores[i]);
    }
    int result = isSorted(scores, 5);
    if(result == 1)
    {
        printf("It is in ascending order.");
    }
    else
    {
        printf("It is not in ascending order");
    }
    return 0;
}

int isSorted(int arr[], int size)
{
    int i, j;
    for(i = 0; i < size-1; i++)
    {
        if(arr[i] > arr[i + 1]) // To check ascending order we have to check the opposite that if any element is bigger than its next element
        {
            return 0;
        }
        else
        {
            return 1; // This will execute if the array is actually in ascending order
        }
    }
}