#include<stdio.h>
int slectionSortDescending(int arr[], int size);
int main(void)
{
    int scores[5] = {85, 92, 78, 90, 88};
    slectionSortDescending(scores, 5);
    for(int i = 0; i<5; i++)
    {
        printf("%d ", scores[i]);
    }
    return 0;
}
int  slectionSortDescending(int arr[], int size)
{
    int i;
    int j;
    int max;
    int temp;
    for(i = 0; i < size-1; i++)
    {
        max = i;
        for(j = i+1; j < size; j++)
        {
            if(arr[j] > arr[max])
            {
                max = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}     