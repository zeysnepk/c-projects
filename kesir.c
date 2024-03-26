#include<stdio.h>

int main()
{
    int a,b,c,d;
    char op;

    printf("isleminizi secin(+,-): ");
    scanf("%c",&op);

    printf("iki tam sayi giriniz:\n");
    scanf("%d%d",&a,&b);

    if(op == '+')
    {

    c=a+b;
    d=a*b;

    if(c%d == 0)
    {
        if(c>d)
        {
            c=c/d;
            d=1;
        }
        else
        {
            d=d/c;
            c=1;
        }
    }
    printf("1/%d + 1/%d = %d/%d\n",a,b,c,d);
    }
    else
    {
        if(a>=b)
        {
            c=a-b;
        }
        else
        {
            c=b-a;
        }
        
    }


}