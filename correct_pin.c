#include<stdio.h>
#define PIN 1234
int main(void)
{
    int p;
  
    do
    {
        printf("Enter PIN:");
        scanf("%d", &p);
        if(p != PIN)
        {
            printf("Incorrect PIN, try again.\n");
            printf("Enter PIN:");
            scanf("%d", &p);
        }
    }while(p != PIN );
    printf("Access granted!");
    return 0;
    
}