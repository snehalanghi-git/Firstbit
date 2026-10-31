//palindrme or not..

#include <stdio.h>

int checkPalindrome(int num)
{
    int temp, rem, rev = 0;

    temp = num;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(num == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    if(checkPalindrome(num))
        printf("Palindrome number");
    else
        printf("Not a Palindrome number");

    return 0;
}