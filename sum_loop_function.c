#include<stdio.h>
long sum_upto(int n);
int main(void)
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Sum = %d", sum_upto(n));
    return 0;
}
long sum_upto(int n)
{
    int i;
    int s=0;
    for(i=1; i<=n; i++)
    {
        s = s + i;
    }
    return s;
}