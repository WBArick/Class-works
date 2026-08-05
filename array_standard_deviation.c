#include<stdio.h>
#include<math.h>
#define SIZE 8
int main(void)
{
    double x[SIZE];
    double mean, st_dev, sum = 0, sum_sqr = 0;
    int i;
    printf("Enter %d numbers separated by blanks:", SIZE);
    for(i = 0; i < SIZE; i++)
    {
        scanf("%lf", &x[i]); //It will take all the inputs at once
    }
    for(i=0; i < SIZE; i++)
    {
        sum = sum + x[i];
        sum_sqr = sum_sqr + (x[i] * x[i]);
    }
    mean = sum / SIZE;
    st_dev = sqrt(sum_sqr / SIZE - mean*mean);
    printf("The mean is %.2f.\n", mean);
    printf("The standard deviation is %.2f.\n", st_dev);
    printf("\nThe table of difference ");
    printf("Between the data values and the mean\n\n");
    printf("Index    Item    Difference\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%3d %9.2f %9.2f\n", i, x[i], x[i] - mean);
    }
    return 0;
}