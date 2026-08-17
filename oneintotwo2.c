//1^2x2^2x3^2x..........xN^2
#include<stdio.h>
int main()
{
    int n,i, result=1;
    printf("Enter n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=result*i*i;
    }
    printf("Result=%d\n",result);
    return 0;
}