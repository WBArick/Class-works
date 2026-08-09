#include<stdio.h>
int findMax(int array[], int size);
int findMin(int array[], int size);
int main(void)
{
    int scores[5] = {3, 88, 67, 45, 101};
    printf("Max = %d\n", findMax(scores, 5)); //Here 'scores' sends the first item in the array
    printf("Minimum = %d\n", findMin(scores, 5));
    return 0;
}
int findMax(int array[], int size)
{
    int max = array[0];
    int i;
    for(i = 1; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int findMin(int array[], int size)
{
    int i;
    int min = array[0];
    for(i = 1; i < size; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}