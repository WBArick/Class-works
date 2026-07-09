#include<stdio.h>
double apply_discount(double price, int type);
int main(void)
{
    double price;
    int type;
    printf("Enter price and customer type:");
    scanf("%lf %d", &price, &type);
    apply_discount(price, type);
    return 0;
}
double apply_discount(double price, int type)
{
    double final_price;
    switch(type)
    {
        case 1:
            final_price= price;
            printf("Final price = %.2f", final_price);
            break;
        case 2:
            final_price= price - (price * (10.0/100));
            printf("Final price = %.2f", final_price);  
            break;  
         case 3:
            final_price= price - (price * (30.0/100));
            printf("Final price = %.2f", final_price);
            break;
        case 4:
            final_price= price - (price * (40.0/100));
            printf("Final price = %.2f", final_price);  
            break;      
        default:
            printf("Invalid customer type.");    
    }
    return final_price;
}