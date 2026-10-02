#include<stdio.h>
int main()
{
    int n;
    int i;
    int arr[10];
    printf("Enter the number of inputs:");
    scanf("%d", &n);
    printf("Enter the numbers:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe numbers are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}