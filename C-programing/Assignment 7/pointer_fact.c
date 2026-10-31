#include <stdio.h>

void factorial(int n, int *fact)
{
    *fact = 1;

    for(int i = 1; i <= n; i++)
    {
        *fact = *fact * i;
    }
}

int main()
{
    int n, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial(n, &fact);

    printf("Factorial = %d", fact);

    return 0;
}