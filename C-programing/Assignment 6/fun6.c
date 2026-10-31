#include <stdio.h>

int checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}

int main()
{
    char ch, result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = checkCase(ch);

    if(result == 1)
        printf("Uppercase character");
    else if(result == 2)
        printf("Lowercase character");
    else
        printf("Not an alphabet");

    return 0;
}