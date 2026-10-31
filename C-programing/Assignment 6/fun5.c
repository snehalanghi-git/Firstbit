#include <stdio.h>

int checkEligibility(int age)
{
    if(age >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(checkEligibility(age))
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");

    return 0;
}