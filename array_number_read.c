#include<stdio.h>
int main(void)
{
    int count;
    int arr[50];
    int i;
    printf("How many numbers do you have?");
    scanf("%d", &count);
    printf("Enter the numbers:");
    for(i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe numbers you have entered are given below:\n");
    for(i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}