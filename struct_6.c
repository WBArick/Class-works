#include<stdio.h>
struct book
{
    char title[20];
    double price;
    int pages;
};
int main(void)
{
    int N;
    printf("Enter the number of books:");
    scanf("%d", &N);
    struct book number[N];
    printf("%d books:\n", N);
    int i;
    for(i = 0; i < N; i++)
    {
        getchar();
        printf("Enter the name of the book:");
        gets(number[i].title);
        printf("Enter the price:");
        scanf("%lf", &number[i].price);
        printf("Enter the number of pages:");
        scanf("%d", &number[i].pages);
    }
    double expen = 0;
    int price_max_idx;
    for(i = 0; i < N; i++)
    {
        if(number[i].price > expen)
        {
            expen = number[i].price;
            price_max_idx = i;
        }
    }
    printf("Most expensive: %s ($%lf)\n", number[price_max_idx].title, number[price_max_idx].price);
    int most_page = 0;
    int page_max_idx;
    for(i = 0; i < N; i++)
    {
        if(number[i].pages > most_page)
        {
            most_page = number[i].pages;
            page_max_idx = i;
        }
    }
    printf("Most pages: %s (%d)\n", number[page_max_idx].title, number[page_max_idx].pages);
    double avg = 0;
    double sum = 0;
    for(i = 0; i < N; i++)
    {
        sum = sum + number[i].price;
    }
    avg = sum / N;
    printf("Average price = $%lf\n", avg);
    int count = 0;
    for(i = 0; i < N; i++)
    {
        if(number[i].price > avg)
        {
            count++;
        }
    }
    printf("Books above average: %d", count);
    return 0;
}