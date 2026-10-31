#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
    }

    printf("Total words: %d", count);

    return 0;
}