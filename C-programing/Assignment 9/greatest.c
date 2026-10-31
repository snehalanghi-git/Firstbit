#include <stdio.h>

void greatest(int arr[], int size)
{
    int max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Greatest = %d", max);
}

int main()
{
    int arr[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    greatest(arr, 5);

    return 0;
}