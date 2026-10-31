//5. Calculate discount based on student status and purchase amount

#include <stdio.h>

float calculateDiscount(float price, char student)
{
    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            return price * 20 / 100;
        else
            return price * 10 / 100;
    }
    else
    {
        if(price > 600)
            return price * 15 / 100;
        else
            return 0;
    }
}

int main()
{
    float price, discount, finalPrice;
    char student;

    printf("Enter purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(price < 0 || (student != 'y' && student != 'Y' &&
                     student != 'n' && student != 'N'))
    {
        printf("Invalid input");
    }
    else
    {
        discount = calculateDiscount(price, student);
        finalPrice = price - discount;

        printf("Discount = %.2f\n", discount);
        printf("Final Price = %.2f", finalPrice);
    }

    return 0;
}