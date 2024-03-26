#include<stdio.h>
int main()
{
    int num1,num2,num3,great;
    printf("Enter The First Number=");
    scanf("%d",&num1);
    printf("Enter The Second Number=");
    scanf("%d",&num2);
    printf("Enter The Third Number=");
    scanf("%d",&num3);
    if(num1> num2 && num1> num3)
    {
        great=num1;
    }
    else if( num2>num3)
    {
        great=num2;
    }
    else
    {
        great=num3;
    }
    printf("The Largest Number Among %d %d %d is %d\n",num1,num2,num3,great);
}