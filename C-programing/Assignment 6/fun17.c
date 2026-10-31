// Sum of numbers in a given range
//With parameter, without return value

#include <stdio.h>

void sumRange(int start, int end)
{
    int sum = 0;

    for(int i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}

int main()
{
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    sumRange(start, end);

    return 0;
}