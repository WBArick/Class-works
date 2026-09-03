#include<stdio.h>
void read_marks(int list[], int n);
int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int mark[n];
    read_marks(mark, n);
    printf("Valid marks entered.\n");
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", mark[i]);
    }
    return 0;
}

void read_marks(int list[], int n)
{
    int i;
    int temp;
    for(i = 0; i < n; i++)
    {
        do
        {
            printf("Enter mark for element %d (1 - 100): ", i+1);
            scanf("%d", &temp);
        } while (temp < 0 || temp > 100); //If this condition is true than the loop will repeat and if this condition is false than the program will go forward
        list[i] = temp;
    }
}