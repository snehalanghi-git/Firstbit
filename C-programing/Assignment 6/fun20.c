//Check whether a number is Perfect or not

#include <stdio.h>

int checkPerfect(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
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

    if(checkPerfect(n))
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}