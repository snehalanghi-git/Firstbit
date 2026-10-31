#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100] = "Programming";
    char str4[100];

    // 1. strlen()
    printf("1. Length = %d\n", (int)strlen(str1));

    // 2. strcpy()
    strcpy(str4, str1);
    printf("2. Copy = %s\n", str4);

    // 3. strncpy()
    strncpy(str4, str3, 4);
    str4[4] = '\0';
    printf("3. Copy first 4 characters = %s\n", str4);

    // 4. strcat()
    strcpy(str4, str1);
    strcat(str4, str2);
    printf("4. Concatenation = %s\n", str4);

    // 5. strncat()
    strcpy(str4, str1);
    strncat(str4, str2, 3);
    printf("5. Append 3 characters = %s\n", str4);

    // 6. strcmp()
    printf("6. Compare = %d\n", strcmp(str1, str2));

    // 7. strncmp()
    printf("7. Compare first 2 characters = %d\n", strncmp(str1, str2, 2));

    // 8. strchr()
    printf("8. Find character = %s\n", strchr(str3, 'g'));

    // 9. strrchr()
    printf("9. Last occurrence = %s\n", strrchr(str3, 'm'));

    // 10. strstr()
    printf("10. Find substring = %s\n", strstr(str3, "gram"));

    // 11. strspn()
    printf("11. Matching characters = %d\n", (int)strspn("123abc", "123456789"));

    // 12. strcspn()
    printf("12. Non-matching position = %d\n", (int)strcspn("123abc", "abc"));

    // 13. strpbrk()
    printf("13. First matching character = %s\n", strpbrk("Hello", "aeiou"));

    // 14. strtok()
    strcpy(str4, "Hello World");
    printf("14. Token = %s\n", strtok(str4, " "));

    // 15. memset()
    memset(str4, '*', 5);
    str4[5] = '\0';
    printf("15. Set characters = %s\n", str4);

    // 16. memchr()
    printf("16. Find character in memory = %s\n", (char *)memchr(str3, 'g', strlen(str3)));

    // 17. memcmp()
    printf("17. Memory compare = %d\n", memcmp("ABC", "ABD", 3));

    // 18. memcpy()
    memcpy(str4, str1, strlen(str1) + 1);
    printf("18. Memory copy = %s\n", str4);

    // 19. memmove()
    memmove(str4 + 1, str4, strlen(str4) + 1);
    printf("19. Memory move = %s\n", str4);

    // 20. strcoll()
    printf("20. String collate = %d\n", strcoll("Apple", "Banana"));

    // 21. strerror()
    printf("21. Error message = %s\n", strerror(2));

    return 0;
}