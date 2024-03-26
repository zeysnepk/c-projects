#include<stdio.h>

int muq(int n)
{
    int i,poz=0;
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            poz+=i;
        }
    }
    if(poz == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int s,f;
    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&s);
    f=muq(s);
    if(f==1)
    {
        printf("Mukemmel sayi\n");
    }
    else
    {
        printf("Mukemmel sayi degildir\n");
    }
}