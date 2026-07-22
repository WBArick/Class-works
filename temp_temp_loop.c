#include<stdio.h>
double celsius_to_fahrenheit(double c);
int main(void)
{
    int start;
    int end;
    double i;
    printf("Enter start and end Celsius: ");
    scanf("%d %d", &start, &end);
    for(i = start; i<=end; i++)
    {
        printf("%.2f C = %.2f F\n", i, celsius_to_fahrenheit(start));
    }
    return 0;

}
double celsius_to_fahrenheit(double c)
{
    double f;
    f = (9.0 / 5.0)*c + 32;
    return f;
}