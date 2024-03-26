#include<stdio.h>
int main()
{
    int dend,sor,quo,rem;
    printf("Enter dividend: ");
    scanf("%d",&dend);
    printf("Enter divisor: ");
    scanf("%d",&sor);
    quo= dend/sor;
    rem= dend%sor;
    printf("quotient: %d, remainder: %d\n",quo,rem);
    
}