#include<stdio.h>
void squareAll(int arr[], int size);
int main(void)
{
    int elements[5] = {5, 6, 3, 7, 2};
    squareAll(elements, 5);
}
void squareAll(int arr[], int size)
{
    int i;
    int sq;
    for(i = 0; i < size; i++)
    {
        sq = arr[i] * arr[i];
        printf("%d ", sq);
    }
}