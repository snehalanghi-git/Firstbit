// strong or not..
#include <stdio.h>

int checkStrong(int n)
{
    int temp = n, rem, sum = 0;

    while(temp > 0)
    {
        rem = temp % 10;

        int fact = 1;

        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(checkStrong(n))
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}