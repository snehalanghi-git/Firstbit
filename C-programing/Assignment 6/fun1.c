//check even or odd ...

#include <stdio.h>

int checkEvenOdd(int num)
{
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(checkEvenOdd(num))
        printf("Even number");
    else
        printf("Odd number");

    return 0;
}