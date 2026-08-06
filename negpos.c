#include<stdio.h>
int main()
{
    int num;
    printf("Enter any numbers: ");
    scanf("%d", &num);
    if(num>0)
        printf("The number is positive.");
    else if(num<0)
        printf("The number is negative.");
    else
        printf("The number is zero.");
    return 0;
}