#include<stdio.h>
int is_valid_triangle( double a, double b, double c);
int main(void)
{
   double a,b,c;
   printf("Enter three side lengths:");
   scanf("%lf %lf %lf", &a, &b, &c);
   is_valid_triangle(a, b, c);
   if(is_valid_triangle(a, b, c)==0)
   {
    printf("Not a valid triangle.");
   }
   else
   {
    if(is_valid_triangle(a, b, c)==1)
    {
        if(a==b && b==c)
        {
            printf("Equilateral triangle.");
        }
        else if(a==b || b==c || c==a)
        {
            printf("Isosceles triangle.");
        }
        else
        {
            printf("Scalene triangle.");
        }
    }
   }
   return 0;
}
int is_valid_triangle( double a, double b, double c)
{
   if((a+b>c) && (b+c>a) && (c+a>b))
   {
    return 1;
   }
   else
   {
    return 0;
   }
}