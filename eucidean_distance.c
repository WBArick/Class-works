#include<stdio.h>
#include<math.h>
double calculate_distance(double x1, double y1, double x2, double y2);
int main(void)
{
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point 1 (x1 y1):");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point 2 (x2 y2):");
    scanf("%lf %lf", &x2, &y2);
    printf("The distance between points is %f", calculate_distance(x1, y1, x2, y2));
    return 0;

}
double calculate_distance(double x1, double y1, double x2, double y2)
{
    double d;
    d= sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return d;
}