#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the number of cases:");
    scanf("%d", &n);
    int i;
    int v, s;
    int result;
    for(i = 0; i < n;  i++)
    {
        printf("Enter velocity and time:");
        scanf("%d %d", &v, &s);
        result = 2 * v * s;
        printf("Result = %d\n", result);
    }
    return 0;
}