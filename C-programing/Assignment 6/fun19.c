//Check whether a number is Armstrong or not

#include <stdio.h>

int checkArmstrong(int n)
{
    int temp = n, rem, sum = 0, digits = 0;

    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;

        int power = 1;

        for(int i = 1; i <= digits; i++)
        {
            power = power * rem;
        }

        sum = sum + power;
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

    if(checkArmstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}