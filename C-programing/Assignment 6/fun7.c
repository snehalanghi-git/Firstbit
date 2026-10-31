#include <stdio.h>

float calculateSalary(float basic)
{
    float da, ta, hra, total;

    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }

    total = basic + da + ta + hra;

    return total;
}

int main()
{
    float basic, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    total = calculateSalary(basic);

    printf("Total Salary = %.2f", total);

    return 0;
}