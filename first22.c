#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("sizeof int = %dbytes\n", sizeof(i));
    printf("sizeof float = %dbytes\n", sizeof(f));
    printf("sizeof double  = %dbytes\n", sizeof(d));
    printf("sizeof char = %dbytes\n", sizeof(c));
    return 0;
}