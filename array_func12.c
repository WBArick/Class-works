#include<stdio.h>
void reverse(double list[], int n);
int main(void)
{
    double arr[5] = {10.5, 33.67, 67.69, 12.99, 47.84};
    reverse(arr, 5);
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%.2f ", arr[i]);
    }
    return 0;
}

void reverse(double list[], int n)
{
    int i;
    double temp;
    for(i = 0; i < n / 2; i++)
    {
        temp = list[i];
        list[i] = list[n- 1 -i];
        list[n - 1 - i] = temp;
    }
}