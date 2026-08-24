#include<stdio.h>
int main(void)
{
    int n;
    int i;
    int j;
    int count = 0;
    int temp;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Orignal: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }
    printf("Sorted: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nTotal swaps: %d", count);
    return 0;
}