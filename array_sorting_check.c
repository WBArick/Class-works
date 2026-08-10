#include<stdio.h>
int isSorted(int arr[], int size);
int main(void)
{
    int scores[5] = {85, 92, 78, 90, 88};
    int check = isSorted(scores, 5);
    if(check == 1)
    {
        printf("Sorted in ascending order.");
    }
    else
    {
        printf("Not sorted");
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
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}     