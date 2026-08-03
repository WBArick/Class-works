#include<stdio.h>
#include<math.h>
int solve_quadratic(double a, double b, double c, double *r1p, double *r2p);
int main(void)
{
    double a, b, c, root1, root2;
    printf("Enter a, b and c:");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(solve_quadratic(a, b, c, &root1, &root2)==1)
    {
        printf("Root 1 = %.2f\nRoot 2 = %.2f", root1, root2);
    }
    else if(solve_quadratic(a, b, c, &root1, &root2)==0)
    {
        printf("Roots doesn't exist");
    }
    return 0;
}
int solve_quadratic(double a, double b, double c, double *r1p, double *r2p)
{
    if((b*b - 4*a*c) >=0)
    {
        *r1p = ((-b+sqrt(b*b-4*a*c))/(2*a));
        *r2p = ((-b-sqrt(b*b-4*a*c))/(2*a));
        return 1;
    }
    else
    {
        return 0;
    }
    
}