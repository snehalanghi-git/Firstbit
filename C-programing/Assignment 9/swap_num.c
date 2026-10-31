#include <stdio.h>

void swap(int arr[], int size)
{
    for(int i = 0; i < size; i = i + 2)
    {
        if(i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    swap(arr, 5);

    printf("After swapping: ");

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}