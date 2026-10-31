#include <stdio.h>

void evenOdd(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d is Even\n", arr[i]);
        else
            printf("%d is Odd\n", arr[i]);
    }
}

int main()
{
    int arr[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    evenOdd(arr, 5);

    return 0;
}