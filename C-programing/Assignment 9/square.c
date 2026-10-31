#include <stdio.h>

void square(int arr[], int size, int result[])
{
    for(int i = 0; i < size; i++)
    {
        result[i] = arr[i] * arr[i];
    }
}

int main()
{
    int arr[5], result[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    square(arr, 5, result);

    printf("Squares: ");

    for(int i = 0; i < 5; i++)
        printf("%d ", result[i]);

    return 0;
}