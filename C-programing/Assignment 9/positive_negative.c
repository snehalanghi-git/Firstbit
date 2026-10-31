#include <stdio.h>

void positiveNegative(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > 0)
            printf("%d is Positive\n", arr[i]);
        else if(arr[i] < 0)
            printf("%d is Negative\n", arr[i]);
        else
            printf("%d is Zero\n", arr[i]);
    }
}

int main()
{
    int arr[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    positiveNegative(arr, 5);

    return 0;
}