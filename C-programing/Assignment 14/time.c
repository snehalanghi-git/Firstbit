#include <stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

struct Time store(struct Time t)
{
    printf("Enter hour: ");
    scanf("%d", &t.hour);

    printf("Enter minutes: ");
    scanf("%d", &t.min);

    printf("Enter seconds: ");
    scanf("%d", &t.sec);

    return t;
}

void display(struct Time t)
{
    printf("\nTime: %02d:%02d:%02d", t.hour, t.min, t.sec);
}

void main()
{
    struct Time t1;

    t1 = store(t1);
    display(t1);
}