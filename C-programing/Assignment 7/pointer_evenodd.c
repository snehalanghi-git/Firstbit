#include <stdio.h>

void checkEvenOdd(int n, int *result)
{
    if(n % 2 == 0)
        *result = 1;
    else
        *result = 0;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(n, &result);

    if(result == 1)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}