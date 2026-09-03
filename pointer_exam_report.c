#include<stdio.h>
int exam_report(int s1, int s2, int s3, int *highp, int *lowp, double*avgp);
int main(void)
{
    int a = 78;
    int b = 55;
    int c = 91;
    int highest;
    int lowest;
    double avg;
    int result = exam_report(a, b, c, &highest, &lowest, &avg);
    printf("Highest = %d\n", highest);
    printf("Lowest = %d\n", lowest);
    printf("Average = %.2f\n", avg);
    if(result == 1)
    {
        printf("All passed.");
    }
    else
    {
        printf("At least one failed.");
    }
    return 0;
}

int exam_report(int s1, int s2, int s3, int *highp, int *lowp, double*avgp)
{
    if(s1 > s2 && s1 > s3)
    {
        *highp = s1;
    }
    else if(s2 > s3 && s2 > s1)
    {
        *highp = s2;
    }
    else if(s3 > s1 && s3 > s2)
    {
        *highp = s3;
    }
    if(s1 < s2 && s1 < s3)
    {
        *lowp = s1;
    }
    else if(s2 < s3 && s2 < s1)
    {
        *lowp = s2;
    }
    else if(s3 < s1 && s3 < s2)
    {
        *lowp = s3;
    }
    *avgp = (s1 + s2 + s3) / 3;
    if(s1 >= 40 && s2 >= 40 && s3 >= 40)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}