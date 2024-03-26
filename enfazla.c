#include<stdio.h>


int main()
{
    char cumle[100];
    int i,j,sayac=0,b=1;
    char cumle2[100];
    char a[100];

    printf("Cumle giriniz: ");
    gets(cumle);

    for(i=0;i<=cumle[i];i++)
    {
        cumle2[i]=cumle[i];
    }

    for(i=0;cumle[i];i++)
    {
        for(j=0;cumle2[j];j++)
        {
            if(cumle[i]==cumle2[j])
            {
                sayac++;
            }
        }
        if(sayac>b)
            {
                a[0]=cumle[i];
            }
        sayac=0;
    }
    printf("%c",a[0]);
}