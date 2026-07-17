#include<stdio.h>
int main(void)
{
    double total=0.00;
    int numb_emp;
    int count_emp;
    double hour;
    double rate;
    double pay;
    printf("Enter the number of employees:");
    scanf("%d", &numb_emp);
    for(count_emp=0; count_emp<numb_emp; count_emp+=1)
    {
        printf("Hours:");
        scanf("%lf", &hour);
        printf("Rate:");
        scanf("%lf", &rate);
        pay = hour*rate;
        printf("Pay is $%.2f\n", pay);
        total= total+pay;
    }
    printf("All employees processed.\n");
    printf("Total payroll is $%.2f", total);
    return 0;
}