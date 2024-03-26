#include <stdio.h>
int main()
{
    int num,arms=0,n,k;
    printf("Enter A Number= ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        k=num%10;
        arms=arms+(k*k*k);
        num=num/10;
    }
    if(n == arms)
    {
        printf("The Number '%d' is Armstrong number\n",n);
    }
    else
    {
        printf("The Number '%d' is NOT Armstrong number\n",n);
    }
}