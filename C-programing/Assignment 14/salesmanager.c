#include <stdio.h>

struct SalesManager
{
    int id;
    char name[50];
    float salary;
    float incentive;
    int target;
};

struct SalesManager store(struct SalesManager s)
{
    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter salary: ");
    scanf("%f", &s.salary);

    printf("Enter incentive: ");
    scanf("%f", &s.incentive);

    printf("Enter target: ");
    scanf("%d", &s.target);

    return s;
}

void display(struct SalesManager s)
{
    printf("\nID: %d", s.id);
    printf("\nName: %s", s.name);
    printf("\nSalary: %.2f", s.salary);
    printf("\nIncentive: %.2f", s.incentive);
    printf("\nTarget: %d", s.target);
}

void main()
{
    struct SalesManager s1;

    s1 = store(s1);
    display(s1);
}