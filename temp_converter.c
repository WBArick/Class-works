#include<stdio.h>
double celsius_to_fahrenheit(double c);
int main(void)
{
    double c;
    printf("Enter the temperature in Celsius:");
    scanf("%lf",&c);
    printf("%.2f degrees Celsius is %.2f degrees Fahrenheit.", c, celsius_to_fahrenheit(c));
    return 0;
}
double celsius_to_fahrenheit(double c)
{
    double f;
    f=(((9.0/5.0)*c)+32);
    return f;
}