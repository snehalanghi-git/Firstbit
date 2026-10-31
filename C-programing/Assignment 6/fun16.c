//Print table of a given number

#include <stdio.h>

int printTable(int n)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printTable(n);

    return 0;
}