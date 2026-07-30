#include<stdio.h>
#include<math.h>
void separate(double num, char *sign, int *whlp, double *fracp);
int main(void)
{
    double value;
    char sn;
    int whole;
    double fr;
    printf("Enter a number:");
    scanf("%lf", &value);
    separate(value, &sn, &whole, &fr);
    printf("Parts of %.4f\n", value);
    printf("Sign = %c\n", sn);
    printf("Whole number magnitude = %d\n", whole);
    printf("Fractional part = %.4f\n", fr);
    return 0;
}
void separate(double num, char *sign, int *whlp, double *fracp)
{
    double magnitude;
    if(num<0)
    {
        *sign = '-';
    }
    else if(num ==0)
    {
        *sign = ' ';
    }
    else if(num > 0)
    {
        *sign = '+';
    }
    magnitude = fabs(num);
    *whlp = floor(magnitude);
    *fracp = magnitude - *whlp;
}