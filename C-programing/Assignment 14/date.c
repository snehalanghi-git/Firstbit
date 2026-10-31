#include <stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};

struct Date store(struct Date d)
{
    printf("Enter date: ");
    scanf("%d", &d.date);

    printf("Enter month: ");
    scanf("%d", &d.month);

    printf("Enter year: ");
    scanf("%d", &d.year);

    return d;
}

void display(struct Date d)
{
    printf("\nDate: %d/%d/%d", d.date, d.month, d.year);
}

void main()
{
    struct Date d1;

    d1 = store(d1);
    display(d1);
}