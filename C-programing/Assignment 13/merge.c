#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, *brr, *crr, n;

    printf("Enter size of each array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(2 * n * sizeof(int));

    printf("Enter first array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        crr[i] = arr[i];
    }

    printf("Enter second array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
        crr[n + i] = brr[i];
    }

    printf("Merged array:\n");
    for(int i = 0; i < 2 * n; i++)
    {
        printf("%d ", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);

    return 0;
}