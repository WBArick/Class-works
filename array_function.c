#include<stdio.h>
#define SIZE 8
void read_array(double list[], int n);
double get_max(const double list[], int n);
double get_average(const double list[], int n);
int main(void)
{
    double array[SIZE];
    read_array(array, SIZE);
    double max = get_max(array, SIZE);
    double ave = get_average(array, SIZE);
    printf("\nMax = %.2f\nAverage = %.2f\n", max , ave);
    return 0;
}
void read_array(double list[], int n)
{
    int i;
    printf("Enter %d real numbers:", n);
    for(i=0; i<n; ++i)
    {
        scanf("%lf", &list[i]);
    }
}
double get_max(const double list[], int n)
{
    double max = list[0];
    int i;
    for(i=1; i<n; i++)
    {
        if(list[i]>max)
        {
            max = list[i];
        }
    }
    return max;
}
double get_average(const double list[], int n)
{
    double avg = 0;
    double sum = 0;
    int i;
    for(i=0; i<n; i++)
    {
        sum = sum + list[i];
    }
    avg = sum / n;
    return avg;
}