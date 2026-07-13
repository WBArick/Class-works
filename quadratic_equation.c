#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c;
    double d;
    double root1;
    double root2;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b - (4*a*c);
    if(d>=0)
    {
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
        printf("The first root is = %.2f\n", root1);
        printf("The second root is = %.2f", root2);
    }
    else
    {
        printf("Complex roots");
    }
    return 0;
}