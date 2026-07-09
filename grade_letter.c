#include<stdio.h>
void letter(char grade);
int main(void)

{
    char grade;
    printf("Enter grade:");
    scanf("%c", &grade);
    letter(grade);

    return 0;
}
void letter(char grade)
{
    switch(grade)
    {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Fair");
            break;
        case 'D':
            printf("Pass");
            break;
        case 'F':
           printf("Fail");
           break;
        default:
           printf("invalid grade");              
    }
    

}