#include<stdio.h>
#define CBEGIN 100
#define CLIMIT 0
#define CSTEP 5
int main(void)
{
    int c;
    double f;
    printf("Celsius\tFahrenheit\n");
    for(c = CBEGIN; c >= CLIMIT; c -= CSTEP)
    {
        f = 1.8 * c + 32;
        printf("%d\t%.2f\n", c, f);
    }
    return 0;
}