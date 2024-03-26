#include<stdio.h>

void fibo(int n)
{
    int i, a=0,b=1,c=1;

    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            c=i;
        }
        
        else
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d ",c);
    }

}

int main()
{
    int s;
    printf("bir sayi giriniz: ");
    scanf("%d",&s);
    
    fibo(s);
}