#include<stdio.h>
int is_prime(int n);
int main(void)
{
    int l, h;
    int i;
    int count=0;
    printf("Enter range: ");
    scanf("%d %d", &l, &h);
    printf("Primes between %d to %d: ", l, h);
    for(i = l; i<=h; i++)
    {
        if(is_prime(i))
        {
            printf("%d ", i);
            count++;
        }
    
    }
    printf("\nCount = %d", count);
   
    return 0;
}
int is_prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i = 2; i<n; i++)
    {
        if(n%i ==0)
        {
            return 0;
        }
    }     
    return 1;

}