#include<stdio.h>
#define SIZE 5
int main(void)
{
    int array[SIZE];
    int i;
    int sum = 0;
    int j;
    double avg = 0;
    printf("Enter %d integer numbers:", SIZE);
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    for(j =0; j<SIZE; j++)
    {
        sum = sum + array[j];
    }
    avg = sum / SIZE;
    int max = array[0];
    int c;
    for(c = 1; c < SIZE; c++)
    {
        if(max < array[c])
        {
            max = array[c];
        }
    }
    int min = array[0];
    int b;
    for(b = 1; b < SIZE; b++)
    {
        if(min > array[b])
        {
            min = array[b];
        }
    }
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}