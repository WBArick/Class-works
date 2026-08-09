#include<stdio.h>
#define SIZE 10
int is_even(int n);
int is_prime(int n);
int main(void)
{
    int array[SIZE];
    int i;
    int even_count = 0;
    int prime_count = 0;
    printf("Enter 10 integer values:");
    for(i= 0; i<SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i<SIZE; i++)
    {
        if(is_even(array[i])==1)
        {
            even_count = even_count + 1;
        }

    }
    printf("Total even numbers = %d\n", even_count);
    for(i = 0; i < SIZE; i++)
    {
        if(is_prime(array[i])==1)
        {
          prime_count = prime_count + 1;
        }  
    }
    printf("Total prime numbers = %d", prime_count);
    return 0;
}
int is_even(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_prime(int n) 
{
       if (n <= 1) 
       {
        return 0;
       }
      for (int i = 2; i * i <= n; i++) 
      {
        if (n % i == 0) {
            return 0;
        }
      }
    return 1;
}