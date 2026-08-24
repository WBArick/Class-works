#include<stdio.h>
int checkSorted(int arr[], int size);
int main(void)
{
    int result[3];
    int i, j;
    for(i = 0; i < 3; i++)
    {
        int n;
        printf("Enter the number of elements:");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the array elements:");
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        result[i] = checkSorted(arr, n);
    }
    for(i = 0; i < 3; i++)
    {
        if(result[i] == -1)
        {
            printf("Array %d : Descending\n", i+1);
        }
        else if(result[i] == 1)
        {
            printf("Array %d : Ascending\n", i+1);
        }
        else if(result[i] == 0)
        {
            printf("Array %d : Unsorted\n", i+1);
        }
    }
    return 0;
}

int checkSorted(int arr[], int size)
{
    int i;
    int ascend = 1;
    int descend = 1;
    for(i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            ascend = 0;
        }
        if(arr[i] < arr[i + 1])
        {
            descend = 0;
        }
    }
    if(ascend == 1)
    {
        return 1;
    }
    if(descend == 1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}