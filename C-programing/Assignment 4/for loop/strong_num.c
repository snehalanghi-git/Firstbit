#include <stdio.h>

int main()
{
    int n, i, j, temp, rem, fact, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers are:\n");

    for(i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            fact = 1;

            for(j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}