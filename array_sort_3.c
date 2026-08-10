#include<stdio.h>
int main(void)
{
    int size;
    int arr[50];
    int i;
    int j;
    int temp;
    int count = 0;
    printf("How many numbers do you have?");
    scanf("%d", &size);
    printf("Enter the numbers:");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count = count + 1;
            }
        }
    }
    printf("Sorted numbers are: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nTotal number of swaps: %d", count);
    return 0;
}            