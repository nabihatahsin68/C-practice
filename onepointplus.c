//1.5+2.5+3.5+......+n
#include<stdio.h>
int main() 
{
    float i,n,sum=0;
    printf("Enter n= ");
    scanf("%f", &n);
    for(i=1.5;i<=n;i++)
    { 
       printf("%f",i);
        sum = sum + i;
    }
    printf("Sum=%.2f\n",sum);
    return 0;

}
