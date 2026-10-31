#include <stdio.h>

void checkPalindrome(int n, int *result)
{
    int temp = n, rem, reverse = 0;

    while(temp > 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    if(reverse == n)
        *result = 1;
    else
        *result = 0;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkPalindrome(n, &result);

    if(result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}