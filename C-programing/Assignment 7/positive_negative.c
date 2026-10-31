#include <stdio.h>

void checkNumber(int n, int *result)
{
    if(n > 0)
        *result = 1;
    else if(n < 0)
        *result = 2;
    else
        *result = 3;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkNumber(n, &result);

    if(result == 1)
        printf("Positive");
    else if(result == 2)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}