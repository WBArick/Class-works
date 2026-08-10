#include<stdio.h>
int main(void)
{
    int size;
    int arr[50];
    int i;
    int j, key;
    printf("How many numbers do you have?");
    scanf("%d", &size);
    printf("Enter the numbers:");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    for(i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("\nAfter sorting: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}    