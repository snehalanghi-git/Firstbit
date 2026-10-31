// sum off first and last digit
#include <stdio.h>

int sumFirstLast(int n)
{
    int last, first;

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    return first + last;
}

int main()
{
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = sumFirstLast(n);

    printf("Sum of first and last digit = %d", sum);

    return 0;
}