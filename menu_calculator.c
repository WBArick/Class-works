#include<stdio.h>
int main(void)
{
    int a;
    int b;
    int result;
    int op;
    do
    {
        printf("Enter the option (1 = Add, 2 = Subtract, 3 = Multiply, 4 = Exit):");
        scanf("%d", &op);
        switch(op)
        {
           case 1:
             printf("Enter two numbers:");
             scanf("%d %d", &a, &b);
             result = a + b;
             printf("Result = %d\n", result);
             break;
           case 2:
             printf("Enter two numbers:");
             scanf("%d %d", &a, &b);
             result = a - b;
             printf("Result = %d\n", result);
             break;
           case 3:
             printf("Enter two numbers:");
             scanf("%d %d", &a, &b);
             result = a * b;
             printf("Result = %d\n", result);
             break;
           case 4:
             printf("Exited\n");
             break;
        
        }   
    }while(op != 4);
    return 0;
    
}