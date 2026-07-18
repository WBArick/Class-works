#include<stdio.h>
int main(void)
{
    int student_numb;
    int read_numb=0;
    int score;
    double avg;
    int sum=0;
    printf("Enter the number of students:");
    scanf("%d", &student_numb);
    while(student_numb<1)
    {
        if(student_numb<1)
            printf("Invalid negative number; try again:");
            scanf("%d", &student_numb);
    }
    while(read_numb<student_numb)
    {
        printf("Enter the student's number:");
        scanf("%d", &score);
        sum = sum + score;
        read_numb +=1;
    }   
    avg = sum / student_numb;
    printf("Class average is %.2f", avg);
    return 0;
}