//prime or not

#include <stdio.h>

int checkPrime(int n)
{
    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(checkPrime(n))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}