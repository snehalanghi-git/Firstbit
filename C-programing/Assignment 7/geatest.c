#include <stdio.h>

void greatest(int a, int b, int *result)
{
    if(a > b)
        *result = a;
    else
        *result = b;
}

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    greatest(a, b, &result);

    printf("Greatest number = %d", result);

    return 0;
}