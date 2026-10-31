#include <stdio.h>

void sumDigits(int arr[], int size, int result[])
{
    for(int i = 0; i < size; i++)
    {
        int temp = arr[i];
        result[i] = 0;

        while(temp > 0)
        {
            result[i] = result[i] + temp % 10;
            temp = temp / 10;
        }
    }
}

int main()
{
    int arr[5], result[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    sumDigits(arr, 5, result);

    for(int i = 0; i < 5; i++)
        printf("Sum of digits of %d = %d\n", arr[i], result[i]);

    return 0;
}