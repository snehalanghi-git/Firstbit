#include <stdio.h>

int main()
{
    char str[100];
    int len = 0, flag = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    for(int i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("String is palindrome");
    else
        printf("String is not palindrome");

    return 0;
}