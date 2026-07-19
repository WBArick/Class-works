#include<stdio.h>
#define SENTINEL 0
int main(void)
{
    int a;
    int status;
    int max=0;
    int min=0;
    printf("Enter the integer value (%d to quit):", SENTINEL);
    status = scanf("%d", &a);
    
  
        if(status ==1 && a != SENTINEL)
        {
            max=a;
            min=a;
            while(status != 0 && a != SENTINEL)
          {
            if(a>max)
            {
                max=a;
            }
            if(a<min);
            {
                min=a;
            }
            printf("Enter the integer value (%d to quit):", SENTINEL);
            status = scanf("%d", &a);
          }
          printf("The maximum value is %d\n", max);
          printf("The minimun value is %d", min);
        }
        else
        {
            printf("No data");
        } 
    return 0;
}