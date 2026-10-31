#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee store(struct Employee e)
{
    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    return e;
}

void display(struct Employee e)
{
    printf("\nEmployee ID: %d", e.id);
    printf("\nName: %s", e.name);
    printf("\nSalary: %.2f", e.salary);
}

void main()
{
    struct Employee e1;

    e1 = store(e1);
    display(e1);
}