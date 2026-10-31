#include <stdio.h>

void square(int n, int *result)
{
    *result = n * n;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    square(n, &result);

    printf("Square = %d", result);

    return 0;
}