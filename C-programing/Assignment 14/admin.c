#include <stdio.h>

struct Admin
{
    int id;
    char name[50];
    float salary;
    float allowance;
};

struct Admin store(struct Admin a)
{
    printf("Enter ID: ");
    scanf("%d", &a.id);

    printf("Enter name: ");
    scanf("%s", a.name);

    printf("Enter salary: ");
    scanf("%f", &a.salary);

    printf("Enter allowance: ");
    scanf("%f", &a.allowance);

    return a;
}

void display(struct Admin a)
{
    printf("\nID: %d", a.id);
    printf("\nName: %s", a.name);
    printf("\nSalary: %.2f", a.salary);
    printf("\nAllowance: %.2f", a.allowance);
}

void main()
{
    struct Admin a1;

    a1 = store(a1);
    display(a1);
}