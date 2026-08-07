#include<stdio.h>
#define TARGET 9
#define SIZE 5
int main(void)
{
    int array[SIZE];
    int result;
    printf("Enter %d numbers to predict the target value:", SIZE);
    int i;
    for(i=0; i<SIZE ; i++)
    {
        scanf("%d", &array[i]);
    }
    int j;
    for(j = 0; j<SIZE; j++)
    {
        if(array[j]==TARGET)
        {
            result = 1;
            break;
        }
        else
        {
            result = 0;
        }
    }
    if(result == 1)
    {
        printf("Target value found at index %d", j+1);
    }
    else if(result == 0)
    {
        printf("Not found.");
    }
    return 0;
}