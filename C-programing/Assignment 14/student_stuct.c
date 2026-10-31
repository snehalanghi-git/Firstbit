#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

struct Student store(struct Student s)
{
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    return s;
}

void display(struct Student s)
{
    printf("\nRoll Number: %d", s.rollNo);
    printf("\nName: %s", s.name);
    printf("\nMarks: %.2f", s.marks);
}

void main()
{
    struct Student s1;

    s1 = store(s1);
    display(s1);
}