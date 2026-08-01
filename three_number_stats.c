#include<stdio.h>
void stat3(int a, int b, int c, int *min, int *max, double *avg);
int main(void)
{
    int a, b, c;
    int minimum;
    int maximum;
    double average;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    stat3(a, b, c, &minimum, &maximum, &average);
    printf("Minimum = %d\nMaximum = %d\nAverage = %.2f\n", minimum, maximum, average);
    return 0;
}
void stat3(int a, int b, int c, int *min, int *max, double *avg)
{
    if(a>b && a>c)
    {
        *max = a;
    }
    else if(b>a && b>c)
    {
        *max = b;
    }
    else if(c>a && c>b)
    {
        *max = c;
    }
    *avg = (double)(a + b + c)/3;
    if(a<b && a<c)
    {
        *min = a;
    }
    else if(b<a && b<c)
    {
        *min = b;
    }
    else if(c<a && c<b)
    {
        *min = c;
    }
}