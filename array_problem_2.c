#include<stdio.h>
int main(void)
{
    int size;
    int arr[10];
    int i;
    int j;
    int temp;
    printf("Enter the number of values:");
    scanf("%d", &size);
    printf("Enter the values:");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Orignal: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] == 0 && arr[j + 1] != 0)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }
    printf("Rearranged: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}    