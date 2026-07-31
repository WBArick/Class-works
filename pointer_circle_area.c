#include<stdio.h>
#define PI 3.1416
void circle_stats(double radius, double *area, double *circumference);
int main(void)
{
    double r;
    double a;
    double c;
    printf("Enter radius:");
    scanf("%lf", &r);
    circle_stats(r, &a, &c);
    printf("Area = %.2f\n", a);
    printf("Circumference = %.2f\n", c);
    return 0;
}
void circle_stats(double radius, double *area, double *circumference)
{
    *area = PI * radius * radius;
    *circumference = 2 * PI * radius;
}