#include <stdio.h>

void addition(int a, int b, int *sum)
{
    *sum = a + b;
}

int main()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    addition(a, b, &sum);

    printf("Addition = %d", sum);

    return 0;
}