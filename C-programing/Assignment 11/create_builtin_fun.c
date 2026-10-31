#include <stdio.h>

// a. mystrcpy()
char *mystrcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return dest;
}

// b. mystrlen()
int mystrlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

// c. mystrcmp()
int mystrcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }

    return s1[i] - s2[i];
}

// d. mystrcat()
char *mystrcat(char *dest, char *src)
{
    int i = 0, j = 0;

    while(dest[i] != '\0')
        i++;

    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

// e. mystrncpy()
char *mystrncpy(char *dest, char *src, int n)
{
    int i;

    for(i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for(; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}

// f. mystrupper()
void mystrupper(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        i++;
    }
}

// g. mystrlower()
void mystrlower(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        i++;
    }
}

// h. mystrrev()
void mystrrev(char *str)
{
    int i = 0, j = mystrlen(str);
    char temp;

    j--;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

// i. mystrstr()
char *mystrstr(char *str, char *sub)
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; sub[j] != '\0'; j++)
        {
            if(str[i + j] != sub[j])
                break;
        }

        if(sub[j] == '\0')
            return &str[i];
    }

    if(sub[0] == '\0')
        return str;

    return NULL;
}

// j. mystrcasecmp()
int mystrcasecmp(char *s1, char *s2)
{
    int i = 0;
    char a, b;

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        a = s1[i];
        b = s2[i];

        if(a >= 'A' && a <= 'Z')
            a = a + 32;

        if(b >= 'A' && b <= 'Z')
            b = b + 32;

        if(a != b)
            return a - b;

        i++;
    }

    return s1[i] - s2[i];
}

// k. mystrchr()
char *mystrchr(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return &str[i];

        i++;
    }

    if(ch == '\0')
        return &str[i];

    return NULL;
}

// l. mystrrchr()
char *mystrrchr(char *str, char ch)
{
    char *result = NULL;
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            result = &str[i];

        i++;
    }

    if(ch == '\0')
        return &str[i];

    return result;
}

// m. mystrncmp()
int mystrncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while(i < n && s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }

    if(i == n)
        return 0;

    return s1[i] - s2[i];
}

// n. mystrnstr()
char *mystrnstr(char *str, char *sub, int n)
{
    int i, j;

    if(sub[0] == '\0')
        return str;

    for(i = 0; i < n && str[i] != '\0'; i++)
    {
        for(j = 0; sub[j] != '\0'; j++)
        {
            if(i + j >= n || str[i + j] == '\0' ||
               str[i + j] != sub[j])
                break;
        }

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

// o. mystrncat()
char *mystrncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;

    while(dest[i] != '\0')
        i++;

    while(j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

// p. mystrncasecmp()
int mystrncasecmp(char *s1, char *s2, int n)
{
    int i = 0;
    char a, b;

    while(i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        a = s1[i];
        b = s2[i];

        if(a >= 'A' && a <= 'Z')
            a = a + 32;

        if(b >= 'A' && b <= 'Z')
            b = b + 32;

        if(a != b)
            return a - b;

        i++;
    }

    if(i == n)
        return 0;

    return s1[i] - s2[i];
}

// Main function
int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100] = "Programming";
    char result[100];

    printf("1. mystrcpy: %s\n", mystrcpy(result, str1));

    printf("2. mystrlen: %d\n", mystrlen(str1));

    printf("3. mystrcmp: %d\n", mystrcmp("Hello", "World"));

    mystrcpy(result, str1);
    printf("4. mystrcat: %s\n", mystrcat(result, str2));

    printf("5. mystrncpy: %s\n", mystrncpy(result, str3, 4));

    mystrcpy(result, str1);
    mystrupper(result);
    printf("6. mystrupper: %s\n", result);

    mystrcpy(result, str1);
    mystrlower(result);
    printf("7. mystrlower: %s\n", result);

    mystrcpy(result, str1);
    mystrrev(result);
    printf("8. mystrrev: %s\n", result);

    printf("9. mystrstr: %s\n", mystrstr(str3, "gram"));

    printf("10. mystrcasecmp: %d\n",
           mystrcasecmp("HELLO", "hello"));

    printf("11. mystrchr: %s\n", mystrchr(str1, 'l'));

    printf("12. mystrrchr: %s\n", mystrrchr(str1, 'l'));

    printf("13. mystrncmp: %d\n",
           mystrncmp("Hello", "Help", 2));

    printf("14. mystrnstr: %s\n",
           mystrnstr(str3, "gram", 8));

    mystrcpy(result, str1);
    printf("15. mystrncat: %s\n",
           mystrncat(result, str2, 3));

    printf("16. mystrncasecmp: %d\n",
           mystrncasecmp("HELLO", "hello", 3));

    return 0;
}