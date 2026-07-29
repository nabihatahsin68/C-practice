#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter temperature in Celsius= ");
    scanf("%f",&C);
    F=(C*1.8)+32;
    printf("Temperature in Fahrenheit= %.2f\n",F);
    return 0;
}