#include<stdio.h>
int main(void)
{
    int a;
    int b;
    int sum;
    char ch;
    do
    {
        printf("Read two integers:");
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("Sum = %d", sum);
        printf("\nRepeat again  [y/n]?");
        scanf(" %c", &ch);
    }while(ch == 'Y' || ch == 'y');
    return 0;
    
}