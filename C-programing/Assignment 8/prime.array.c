#include <stdio.h>

int main()
{
    int arr[5], count;

    printf("Enter 5 elements: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers: ");

    for(int i = 0; i < 5; i++)
    {
        count = 0;

        for(int j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}