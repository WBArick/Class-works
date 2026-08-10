#include<stdio.h>
void insertionSort(int arr[], int size);
int main(void)
{
    int scores[5] = {85, 92, 78, 90, 88};
    insertionSort(scores, 5);
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", scores[i]);
    }
    return 0;
}
void insertionSort(int arr[], int size)
{
    int i, key, j;
    for(i=1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];  //This shifts the bigger number to the right
            j--;
        }
        arr[j + 1] = key; // This makes sure that the small number goes to the left
    }
}