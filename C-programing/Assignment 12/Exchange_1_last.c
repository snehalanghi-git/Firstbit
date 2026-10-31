#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, len = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;

    printf("Modified string: %s", str);

    return 0;
}