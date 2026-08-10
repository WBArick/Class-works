#include<stdio.h>
void bubbleSort(int arr[], int size);
int main(void)
{
    int scores[5] = {85, 92, 78, 90, 88};
    bubbleSort(scores, 5);
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", scores[i]);
    }
    return 0;
}
void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for(i = 0; i < size-1; i++)
    {
        for(j=0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}