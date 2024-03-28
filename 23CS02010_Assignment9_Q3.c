#include <stdio.h>

struct dates
{
    int day;
    int month;
    int year;
}date[2];

void comp()
{
    if(date[0].year > date[1].year)
    printf("1");
    else if(date[0].year < date[1].year)
    printf("-1");
    else
    {
        if(date[0].month > date[1].month)
        printf("1");
        else if(date[0].month < date[1].month)
        printf("-1");
        else
        {
            if(date[0].day > date[1].day)
            printf("1");
            else if(date[0].day < date[1].day)
            printf("-1");
            else
            printf("0");
        }
    }
}

int main()
{
    for(int i = 0; i<2; i++)
    {
        printf("Enter the day of date %d: ",i+1);
        scanf("%d", &date[i].day);
        printf("Enter the month of date %d: ",i+1);
        scanf("%d", &date[i].month);
        printf("Enter the year of date %d: ",i+1);
        scanf("%d", &date[i].year);
    }
    comp();
}