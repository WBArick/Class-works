#include<stdio.h>
int secondLargest(int arr[], int size);
int main(void)
{
    int scores[5] = {85, 92, 78, 90, 88};
    int result = secondLargest(scores, 5);
    printf("Second largest = %d", result);
    return 0;
}
int secondLargest(int arr[], int size)
{
    int largest=0;
    int second=0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    return second;
}