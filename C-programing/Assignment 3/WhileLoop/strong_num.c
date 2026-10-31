
#include <stdio.h>

int main()
{
    int n = 145;
    int temp = n;
    int rem, i, fact, sum = 0;

    while (temp > 0)
    {
        rem = temp % 10;
        fact = 1;

        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }

    return 0;
}
