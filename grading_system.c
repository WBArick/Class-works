#include<stdio.h>
int main(void)
{
    int sub1, sub2, sub3;
    char dep;
    double avg;
    printf("Enter 3 subjects marks:");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    printf("Enter department (C = CSE), (E = EEE), (B = BBA):");
    scanf(" %c", &dep);
    avg = (sub1 + sub2 + sub3)/3.0;
    printf("Average = %.2f\n", avg);
    if(avg >= 80)
    {
        printf("Grade A\n");
    }
    else if(avg>=70)
    {
        printf("Grade B\n");
    }
    else if(avg>=60)
    {
        printf("Grade C\n");
    }
    else if(avg>=50)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
    if(avg>=90 && sub1>=80 && sub2>=80 && sub3>=80)    
    {
        printf("Full scholarship\n");
    }
    else
    {
        if(avg>=80)
        {
            printf("Half scholarship\n");
        }
        else
        {
            printf("No scholarship");
        }
    }
    return 0;

}    