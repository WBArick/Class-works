#include<stdio.h>

int main(void)
{
    char ch;
    int cate;
    printf("Enter the class (B = Business, E = Economy) and passenger category (1 = child, 2 = adult, 3= senior):");
    scanf("%c %d", &ch, &cate);
    switch(ch)
    {
        case 'B':
        {
            switch(cate)
            {
                case 1:
                   printf("Price = 3000");
                   break;
                case 2:
                   printf("Price = 5000");
                   break;
                case 3:
                   printf("Price = 4000");
                   break;
                default:
                   printf("Invalid input");            
            }
        }
        case 'E':
        {
            switch(cate)
            {
                case 1:
                    printf("Price = 1200");
                    break;
                case 2:
                    printf("Price = 2000");
                    break;
                case 3:
                    printf("Price = 1500");
                    break;
                default:
                    printf("Invalid input");    
            }
        }
    }
    return 0;
}