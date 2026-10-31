#include <stdio.h>

int main()
{
    int num, choice, i, count, rem, rev, sum, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
            {
                printf("%d is Even", num);
            }
            else
            {
                printf("%d is Odd", num);
            }
            break;

        case 2:
            count = 0;

            if(num <= 1)
            {
                printf("%d is not Prime", num);
            }
            else
            {
                for(i = 1; i <= num; i++)
                {
                    if(num % i == 0)
                    {
                        count++;
                    }
                }

                if(count == 2)
                {
                    printf("%d is Prime", num);
                }
                else
                {
                    printf("%d is not Prime", num);
                }
            }
            break;

        case 3:
            temp = num;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if(num == rev)
            {
                printf("%d is Palindrome", num);
            }
            else
            {
                printf("%d is not Palindrome", num);
            }
            break;

        case 4:
            if(num > 0)
            {
                printf("%d is Positive", num);
            }
            else if(num < 0)
            {
                printf("%d is Negative", num);
            }
            else
            {
                printf("Number is Zero");
            }
            break;

        case 5:
            temp = num;
            rev = 0;

            while(temp != 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse of %d is %d", num, rev);
            break;

        case 6:
            temp = num;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}