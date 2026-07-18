#include<stdio.h>
#define SENTINEL -1
int main(void)
{
    int score;
    int count_numb=1;
    int sum=0;
    double avg;
    printf("Enter exam scores (%d to quit):", SENTINEL);
    scanf("%d", &score);
    while(score != SENTINEL)
    {
        printf("Your score is %d\n", score);
        sum = sum + score;
        printf("Enter exam scores (%d to quit):", SENTINEL);
        scanf("%d", &score);
        count_numb = count_numb+1;
    }
    printf("Sum is %d", sum);
    avg = sum / count_numb;
    printf("Average is %.2f", avg);
    return 0;
}