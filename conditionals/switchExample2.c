// Program to create a simple calculator
#include <stdio.h>

int main()
{
    char operator;
    float num1, num2;

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    printf("Select an operator +, -, *, /: ");
    fflush( stdin);
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        printf("%0.3f + %.3f = %.3f", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%.3f - %.3f = %.3f", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%.3f * %.3f = %.3f", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%.3f / %.3f = %.3f", num1, num2, num1 / num2);
        break;

    // operator doesn't match any case constant +, -, *, /
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}