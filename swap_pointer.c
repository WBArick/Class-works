#include<stdio.h>
void swap(int *a, int *b);
int main(void)
{
    int a = 10;
    int b = 50;
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b); //Passing the address to the function and pointer is gonna overwrite it
    printf("Swapped a = %d, Swapped b = %d\n", a, b);
    return 0;
}
void swap(int *a, int *b) //This '*' is declaring that it is a pointer
{
    int temp;
    temp = *a; //This means the value of a, not the address of a and this is possible because of the '*'
    *a = *b; // This '*' works as part of the name here 
    *b = temp;
}