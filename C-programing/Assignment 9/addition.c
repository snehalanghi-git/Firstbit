#include <stdio.h>

void addition(int arr[], int size, int *sum)
{
    *sum = 0;

    for(int i = 0; i < size; i++)
    {
        *sum = *sum + arr[i];
    }
}

int main()
{
    int arr[5], sum;

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    addition(arr, 5, &sum);

    printf("Sum = %d", sum);

    return 0;
}