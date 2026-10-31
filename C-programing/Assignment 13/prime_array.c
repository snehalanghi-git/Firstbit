#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, count;

    printf("Enter array size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers: ");

    for(int i = 0; i < n; i++)
    {
        count = 0;

        if(arr[i] > 1)
        {
            for(int j = 1; j <= arr[i]; j++)
            {
                if(arr[i] % j == 0)
                    count++;
            }

            if(count == 2)
                printf("%d ", arr[i]);
        }
    }

    free(arr);
    return 0;
}