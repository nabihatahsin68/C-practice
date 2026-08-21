#include<stdio.h>
int main()
{ 
    int num[5];//declaration of array
    num[0] = 10;//initialization of array
    num[1] = 20;
    num[2] = 30;
    int sum = num[0] + num[1] + num[2] ; //calculating sum of array elements
    printf("Sum of array elements: %d\n", sum);
    return 0;
}