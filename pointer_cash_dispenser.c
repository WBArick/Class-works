#include<stdio.h>
void change_maker(int amount, int *n500p, int *n100p, int *n50p, int *n10p, int *n1p);
int main(void)
{
    int money;
    int n500, n100, n50, n10, n1;
    printf("Enter the amount of money:");
    scanf("%d", &money);
    change_maker(money, &n500, &n100, &n50, &n10, &n1);
    printf("%d five hundred taka notes,\n%d one hundred taka notes,\n%d fifty taka notes,\n%d ten taka notes,\n%d one taka notes\n", n500, n100, n50, n10, n1);

    printf("Total = %d", (n500*500) + (n100*100) + (n50*50) + (n10*10) + (n1*1));
    return 0;
}
void change_maker(int amount, int *n500p, int *n100p, int *n50p, int *n10p, int *n1p)
{
    *n500p = amount / 500;
    *n100p = (amount % 500)/ 100;
    *n50p = ((amount % 500)% 100) / 50;
    *n10p = (((amount % 500)% 100) % 50) / 10;
    *n1p = ((((amount % 500)% 100) % 50) % 10) / 1;
}