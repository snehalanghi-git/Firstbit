#include <stdio.h>

void sumDigits(int n, int *sum)
{
    *sum = 0;

    while(n > 0)
    {
        *sum = *sum + (n % 10);
        n = n / 10;
    }
}

int main()
{
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sumDigits(n, &sum);

    printf("Sum of digits = %d", sum);

    return 0;
}