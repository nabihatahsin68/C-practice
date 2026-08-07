#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
        printf("Capital");
    else if(ch>='a' && ch<='z')
        printf("Small");
    else
        printf("Not an alphabet");
    return 0;
}