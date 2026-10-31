// Accept three sides and determine the type of triangle

#include <stdio.h>

int checkTriangle(int a, int b, int c)
{
    if(a + b <= c || a + c <= b || b + c <= a)
        return 0;
    else if(a == b && b == c)
        return 1;
    else if(a == b || b == c || a == c)
        return 2;
    else
        return 3;
}

int main()
{
    int a, b, c, result;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid triangle");
    }
    else
    {
        result = checkTriangle(a, b, c);

        if(result == 0)
            printf("Invalid triangle");
        else if(result == 1)
            printf("Equilateral triangle");
        else if(result == 2)
            printf("Isosceles triangle");
        else
            printf("Scalene triangle");
    }

    return 0;
}