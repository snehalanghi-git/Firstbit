#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n;

    printf("Enter array size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements: ");

    for(int i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}