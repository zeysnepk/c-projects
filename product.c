#include <stdio.h>
int main()
{
    int num,b=1;
    printf("Enter a number = ");
    scanf("%d",&num);
    while(num != 0)
    {
        b=b*(num%10);
        num=num/10;
    }
    printf("The Product is %d\n",b);
}