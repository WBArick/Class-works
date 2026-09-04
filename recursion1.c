#include<stdio.h>
int multiply(int m, int n);
int main(void)
{
    int result = multiply(6, 3);
    printf("%d", result);
}

int multiply(int m, int n)
{
    int ans;
    if(n == 1)
    {
        ans = m;
    }
    else
    {
        ans = m + multiply(m, n - 1);
    }
    return ans;
}