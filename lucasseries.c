//lucas series starts from 3 
// 2=first 1=second =3= first+second
#include<stdio.h>
int main()
{
    int numTerms;
    printf("Enter the number of terms for Lucas series: ");
    scanf("%d", &numTerms);
    int first = 2, second = 1;
    printf("Lucas Series up to %d terms: \n", numTerms);
    printf("%d %d ", first, second);
    for(int i = 3; i <= numTerms; i++)
    {
        int nextTerm = first + second;
        printf("%d ", nextTerm);
        first = second;
        second = nextTerm;
    }
    printf("\n");
    return 0;
}