 #include<stdio.h>
 int main(void)
 {
    double total;
    int numb_emp;
    int count_emp=0;
    double hour;
    double rate;
    double pay;
    printf("Enter the number of employees:");
    scanf("%d", &numb_emp);
    while(count_emp<numb_emp)
    {
        printf("Hours:");
        scanf("%lf", &hour);
        printf("rate:");
        scanf("%lf", &rate);
        pay = hour*rate;
        printf("Pay is $%.2f\n", pay);
        total=total+pay;
        count_emp=count_emp+1;
    }
    printf("All employees are processed.\n");
    printf("Total payroll is $%.2f", total);
    return 0;
 }