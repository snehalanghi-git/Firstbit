#include <stdio.h>

int main()
{
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(i % 2 == 0)
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Modified string: %s", str);

    return 0;
}