#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 elements: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers: ");

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}