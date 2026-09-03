#include<stdio.h>
void print_evens(const int list[], int n);
int main(void)
{
    int arr[6] = {3, 8, 5, 2, 7, 6};
    print_evens(arr, 6);
}

void print_evens(const int list[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(list[i] % 2 == 0)
        {
            printf("%d ", list[i]);
        }
    }
}