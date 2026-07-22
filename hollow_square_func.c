#include<stdio.h>
void print_hollow_square(int size);
int main(void)
{
    print_hollow_square(5);
    return 0;
}
void print_hollow_square(int size)
{
    int i,j;
    for(i=1; i<=size; i++)
    {
        printf("*");
        for(j=1; j<=size; j++)
        {
            if(i==1 || i==5 || j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}