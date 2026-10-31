#include <stdio.h>

int main()
{
    int arr[5], min, max;

    printf("Enter 5 elements: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);

    return 0;
}