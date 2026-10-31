#include <stdio.h>

int main()
{
    int n, i, j, temp, rem, count, sum, power;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers are:\n");

    for(i = 1; i <= n; i++)
    {
        temp = i;
        count = 0;
        sum = 0;

        for(j = i; j > 0; j = j / 10)
        {
            count++;
        }

        temp = i;

        while(temp > 0)
        {
            rem = temp % 10;
            power = 1;

            for(j = 1; j <= count; j++)
            {
                power = power * rem;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}