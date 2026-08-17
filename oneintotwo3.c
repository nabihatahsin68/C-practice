//1^3x3^3x5^3x..........xN^3
#include<stdio.h>
int main()
{
    int n,i, result=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        result=result*i*i;
    }
    printf("Result=%d\n",result);
    return 0;
}