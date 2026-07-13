#include<stdio.h>
int main(void)
{
    int unit;
    double bill;
    printf("Enter the unit:");
    scanf("%d", &unit);
    if(unit<=75)
    {
        bill = unit * 4.50;
        printf("Total bill = %.2f", bill);
    }
    else if(unit <= 200)
    {
        bill = (75 * 4.50) + (unit - 75) * 5.50;
        printf("Total bill = %.2f", bill);
    }
    else if(unit <= 300)
    {
        bill = (75 * 4.50) + (125* 5.50) + (unit - 200) * 6.50;
        printf("Total bill = %.2f", bill);
    }
    else
    {
        bill = (75 * 4.50) + (125* 5.50) + (100 * 6.50) +(unit -300) * 8.00;
        printf("Total bill = %.2f", bill);
    }
    return 0;
    
}