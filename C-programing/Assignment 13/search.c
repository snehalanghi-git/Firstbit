#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, search, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found");
    else
        printf("Number not found");

    free(arr);
    return 0;
}