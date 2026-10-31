#include <stdio.h>

void factorial(int arr[], int size, int result[])
{
    for(int i = 0; i < size; i++)
    {
        result[i] = 1;

        for(int j = 1; j <= arr[i]; j++)
        {
            result[i] = result[i] * j;
        }
    }
}

int main()
{
    int arr[5], result[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    factorial(arr, 5, result);

    for(int i = 0; i < 5; i++)
        printf("Factorial of %d = %d\n", arr[i], result[i]);

    return 0;
}