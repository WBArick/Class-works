#include<stdio.h>
void leap_year(int month, int year);
int main(void)
{
    int month, year;
    printf("Enter month and year:");
    scanf("%d %d", &month, &year);
    leap_year(month,year);
    return 0;

}
void leap_year(int month, int year)
{
    switch(month)
    {
        case 1:
            printf("January %d has 31 days.", year);
            break;
        case 2:
            if(year%4==0)
            {
                
                if(year%100==0)
                {
                    if(year%400==0)
                    {
                        printf("February %d has 29 days.", year);
                    }
                    else
                    {                  
                        printf("February %d has 28 days.", year);
                    } 
                }
                else
                {
                    printf("February %d has 29 days.", year);
                }   
            }
            else
            {
                printf("February %d has 28 days.", year);
                
            }
            break;
        case 3:
            printf("March %d has 31 days", year);
            break;
        case 4:
            printf("April %d has 30 days", year);
            break;
        case 5:
            printf("May %d has 31 days", year);
            break;
        case 6:
            printf("June %d has 30 days", year);
            break;
        case 7:
            printf("July %d has 31 days", year);
            break; 
        case 8:
            printf("August %d has 31 days", year);
            break; 
        case 9:
            printf("September %d has 30 days", year);
            break; 
        case 10:
            printf("October %d has 31 days", year);
            break; 
        case 11:
            printf("November %d has 30 days", year);
            break; 
        case 12:
            printf("December %d has 31 days", year);
            break; 
        default:
                printf("Invalid month");
    }
    
}