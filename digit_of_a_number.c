#include<stdio.h>
int main(void)
{
    int a;
    int count_numb=0;
    int digit;
    int sum=0;
    printf("Enter a positive integer:");
    scanf("%d", &a);
    while(a > 0)
    {
        digit = a%10;
        printf("%d", digit);
        a = a/10;
        count_numb  += 1;
        sum = sum + digit;
    }
    printf("\tNumber of digits = %d,\t", count_numb);
    printf("Digit sum = %d", sum);
    return 0;
}