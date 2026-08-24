#include<stdio.h>
void mergeSorted(int a[], int sizeA, int b[], int sizeB, int result[]);
int main(void)
{
    int a; 
    int b;
    int i;
    printf("Enter the size of the first array:");
    scanf("%d", &a);
    int arr1[a];
    printf("Enter the elements of the array:");
    for(i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array:");
    scanf("%d", &b);
    int arr2[b];
    printf("Enter the elements of the second array:");
    for(i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int result[a+b];
    mergeSorted(arr1, a, arr2, b, result);
    printf("Merged: ");
    for(i = 0; i < a + b; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}

void mergeSorted(int a[], int sizeA, int b[], int sizeB, int result[])
{
    int i= 0;
    int j = 0;
    int k = 0;
    while(i < sizeA && j < sizeB)
    {
        if(a[i] < b[j])
        {
            result[k] = a[i];
            i++;
            k++;
        }
        else
        {
            result[k] = b[j];
            j++;
            k++;
        }
    }
    while(i < sizeA)
    {
        result[k] = a[i];
        i++;
        k++;
    }
    while(j < sizeB)
    {
        result[k] = b[j];
        j++;
        k++;
    }
}