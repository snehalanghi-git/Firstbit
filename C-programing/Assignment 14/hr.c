#include <stdio.h>

struct HR
{
    int id;
    char name[50];
    float salary;
    float commission;
};

struct HR store(struct HR h)
{
    printf("Enter ID: ");
    scanf("%d", &h.id);

    printf("Enter name: ");
    scanf("%s", h.name);

    printf("Enter salary: ");
    scanf("%f", &h.salary);

    printf("Enter commission: ");
    scanf("%f", &h.commission);

    return h;
}

void display(struct HR h)
{
    printf("\nID: %d", h.id);
    printf("\nName: %s", h.name);
    printf("\nSalary: %.2f", h.salary);
    printf("\nCommission: %.2f", h.commission);
}

void main()
{
    struct HR h1;

    h1 = store(h1);
    display(h1);
}