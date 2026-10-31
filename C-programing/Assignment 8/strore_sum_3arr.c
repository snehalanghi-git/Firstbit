#include <stdio.h>

int main()
{
    int arr[5], brr[5], crr[5];

    printf("Enter first array elements: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array elements: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}