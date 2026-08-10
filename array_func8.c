#include<stdio.h>
void reverseArray(int arr[], int size);
int main(void)
{
    int scores[5] = {85, 92, 78, 90, 88};
    reverseArray(scores, 5);
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", scores[i]);
    }
    return 0;
}
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(start < end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}