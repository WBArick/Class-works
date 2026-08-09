#include<stdio.h>
int linearsearch(int array[], int size, int target);
int main(void)
{
    int values[5] = {83, 29, 94, 67, 12};
    int result = linearsearch(values, 5, 67);
    if(result != -1)
    {
        printf("Found 67 at index %d\n", result);
    }
    else
    {
        printf("67 was not found\n");
    }
    return 0;
}
int linearsearch(int array[], int size, int target)
{
    int i;
    for(i = 1; i < size; i++)
    {
        if(array[i] == target)
        {
            return i; //If the target is enough than it will return the value and imediately exit the loop 
        }
    }
    return -1;
}