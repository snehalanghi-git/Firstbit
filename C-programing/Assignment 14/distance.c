#include <stdio.h>

struct Distance
{
    int feet;
    float inch;
};

struct Distance store(struct Distance d)
{
    printf("Enter feet: ");
    scanf("%d", &d.feet);

    printf("Enter inches: ");
    scanf("%f", &d.inch);

    return d;
}

void display(struct Distance d)
{
    printf("\nDistance: %d feet %.2f inches", d.feet, d.inch);
}

void main()
{
    struct Distance d1;

    d1 = store(d1);
    display(d1);
}