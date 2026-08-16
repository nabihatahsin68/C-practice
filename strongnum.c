//145= 1! + 4! + 5!= 1 + 24 + 120 = 145
#include <stdio.h>
int main()
{
    int num, sum = 0, temp, remainder, fact,i;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        fact = 1;
        for (int i = 1; i <= remainder; i++)
        {
            fact *= i;
        }
        sum=sum + fact;
        temp= temp/ 10;
    }
    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);
    return 0;
}