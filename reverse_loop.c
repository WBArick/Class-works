#include<stdio.h>
int reverse_number(int n);
int main(void)
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Reversed = %d", reverse_number(N));
    return 0;
}
int reverse_number(int n)
{
    int re=0;
    while(n != 0)
    {
        re = re*10 + (n%10);
        n = n/10;
    }
    return re;

}