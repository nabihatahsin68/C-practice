#include<stdio.h>
int main()
{
    int choice;
    printf("Temparature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            {
                float fahrenheit, celsius;
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &fahrenheit);
                celsius = (fahrenheit - 32) * 5 / 9;
                printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
            }
            break;
        case 2:
            {
                float celsius, fahrenheit;
                printf("Enter temperature in Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = (celsius * 9 / 5) + 32;
                printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
            }
            break;
        default:
            printf("Invalid choice\n");
    }
}