#include <stdio.h>

void palindrome(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int temp = arr[i], reverse = 0, rem;

        while(temp > 0)
        {
            rem = temp % 10;
            reverse = reverse * 10 + rem;
            temp = temp / 10;
        }

        if(reverse == arr[i])
            printf("%d is Palindrome\n", arr[i]);
        else
            printf("%d is Not Palindrome\n", arr[i]);
    }
}

int main()
{
    int arr[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    palindrome(arr, 5);

    return 0;
}