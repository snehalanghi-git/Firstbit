//7. Accept age and identify the person's category

#include <stdio.h>

int checkAge(int age)
{
    if(age < 12)
        return 1;
    else if(age <= 19)
        return 2;
    else if(age <= 59)
        return 3;
    else
        return 4;
}

int main()
{
    int age, result;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 0)
    {
        printf("Invalid age");
    }
    else
    {
        result = checkAge(age);

        if(result == 1)
            printf("Child");
        else if(result == 2)
            printf("Teenager");
        else if(result == 3)
            printf("Adult");
        else
            printf("Senior");
    }

    return 0;
}