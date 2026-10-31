// Accept two numbers and an operator and perform the desired operation
#include <stdio.h>

float calculate(float a, float b, char op)
{
    switch(op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            return a / b;

        case '%':
            return (int)a % (int)b;

        default:
            return 0;
    }
}

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    if((op == '/' || op == '%') && num2 == 0)
    {
        printf("Division by zero is not allowed");
    }
    else if(op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
    {
        printf("Invalid operator");
    }
    else
    {
        result = calculate(num1, num2, op);
        printf("Result = %.2f", result);
    }

    return 0;
}