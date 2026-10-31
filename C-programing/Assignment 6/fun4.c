// chec the vowel or not ...


#include <stdio.h>

int checkVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(checkVowel(ch))
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}