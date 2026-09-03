#include<stdio.h>
#define SIZE 5
void copy_array(const double source[], double dest[], int n);
int main(void)
{
    double arr1[SIZE] = {22.5, 67.67, 89.23, 10.67, 8.88};
    double arr2[SIZE];
    copy_array(arr1, arr2, SIZE);
    printf("Elements of array2:\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%.2f ", arr2[i]);
    }
    return 0;
}

void copy_array(const double source[], double dest[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        dest[i] = source[i];
    }
}