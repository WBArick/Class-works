#include<stdio.h>
#define TARGET 67
int binary_search(int a[], int target, int n);
int main(void)
{
    int arr[6] = {10, 67, 89, 99, 102};
    int result;
    result = binary_search(arr, TARGET, 6);
    if(result != -1)
    {
        printf("Target was found at index %d", result+1);
    }
    else
    {
        printf("Target was not found");
    } 
    return 0;
}

int binary_search(int a[], int target, int n)
{
    int first = 0;
    int last = n - 1;
    int mid;
    while(first <= last)
    {
        mid = (first + last) / 2;
        if( a[mid] == target)
        {
            return mid;
        }
        else if(a[mid] > target)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return -1;
}