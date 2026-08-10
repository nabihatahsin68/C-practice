#include<stdio.h>
int main()
{
    double num1, num2;
    char operator;
    printf("Enter two numbers:");
    scanf("%lf %lf", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch(operator)
    {
        case '+':
            printf("%lf + %.2lf = %lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator\n");
    }
}