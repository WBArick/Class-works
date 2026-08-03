#include<stdio.h>
void time_convert(int total, int *hp, int *mp, int *sp);
int main(void)
{
    int total;
    int hrs;
    int mins;
    int sec;
    printf("Enter seconds:");
    scanf("%d", &total);
    time_convert(total, &hrs, &mins, &sec);
    printf("%d hour(s) %d minutes %d seconds", hrs, mins, sec);
    return 0;
}
void time_convert(int total, int *hp, int *mp, int *sp)
{
    *hp = total /3600;
    *mp = (total%3600)/60;
    *sp = (total%3600)%60;
}