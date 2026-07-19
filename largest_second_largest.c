#include<stdio.h>
int main(void)
{
    int num;
    int i;
    int largest;
    int second_largest;
    printf("Enter number 1:");
    scanf("%d", &largest);
    printf("Enter number 2:");
    scanf("%d", &num);
    if(num>largest)
    {
        second_largest=largest;
        largest=num;
    }
    else
    {
        num=second_largest;
    }
    for(i=3; i<=10; i++)
    {
        printf("Enter number %d:", i);
        scanf("%d", &num);
          if(num>largest)
          {
              second_largest=largest;
              largest=num;
          }
          else
          {
            num=second_largest;
          }
    }
    printf("The largest number is = %d", largest);
    printf("The second largest number is = %d", second_largest);
    return 0;

}