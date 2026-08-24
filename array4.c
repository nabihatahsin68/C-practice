#include<stdio.h>
int main()
{
    int a[5], sum=0 ,i;
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;
    for(int i=0; i<5; i++)
    {
        sum=sum+ a[i]; 
        //calculating sum of array elements
    }
    printf("Sum of array elements is: %d", sum);
    printf("The average is: %2f\n", (float)sum/5);

}