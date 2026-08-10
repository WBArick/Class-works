#include<stdio.h>
int isSorted(int arr[], int size);
int main(void)
{
    int scores[5] = {85, 92, 78, 90, 88};
    isSorted(scores, 5);
    for(int i = 0; i<5; i++)
    {
        printf("%d ", scores[i]);
    }
    return 0;
}
int isSorted(int arr[], int size)
{
    int i;
    int j;
    int min;
    int temp;
    for(i = 0; i < size-1; i++)
    {
        min = i;
        for(j = i+1; j < size; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}