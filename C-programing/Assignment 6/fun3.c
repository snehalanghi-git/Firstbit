// leap year or not...

#include <stdio.h>

int checkLeapYear(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(checkLeapYear(year))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}