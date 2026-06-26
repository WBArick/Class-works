#include<stdio.h>
#define TAX_RATE 0.15;
int main()
{
    char grade;
    int units;
    double price;
    double totalCost;
    double tax;
    double finalCost;

    printf("Enter grade:");
    scanf("%c", &grade);
    printf("Enter units:");
    scanf("%d", &units);
    printf("Enter price:");
    scanf("%lf", &price);
    totalCost = units * price;
    tax = totalCost * TAX_RATE;
    finalCost = totalCost;
    printf("Grade: %c\nUnits: %d\nPrice: %.2f\nTotal cost: %.2f\nTax: %.2f\nFinal cost: %.2f", grade, units, price, totalCost, tax, finalCost);
    return 0;

}