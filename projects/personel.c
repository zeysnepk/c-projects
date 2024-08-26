#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct personel
{
    int sifre;
    char ad[10];
    char soyad[10];
    int yas;
    float maas;
    char cinsiyet[10];
}kisiler;

void sirala(kisiler x[], int n)
{
    int i,j;
    kisiler y;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)

        {if(strcmp(x[j].ad,x[j+1].ad) >0)
        {
            y=x[j];
            x[j]=x[j+1];
            x[j+1]=y;
        }}
    }
}


void listele(kisiler x[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Ad: %s\n",x[i].ad);
        printf("Soyad: %s\n",x[i].soyad);
        printf("Yas: %d\n",x[i].yas);
        printf("Maas: %.2f\n",x[i].maas);
        printf("Cinsiyet: %s\n",x[i].cinsiyet);
        printf("\n");
    }
}

int main()
{
    
    int i,kisi;
    printf("Kac personel: ");
    scanf("%d",&kisi);
    kisiler x[kisi];

    for(i=0;i<kisi;i++)
    {
        printf("%d. kisinin bilgilerini giriniz:\n",i+1);
        printf("Ad: ");
        scanf("%s",x[i].ad);
        printf("Soyad: ");
        scanf("%s",x[i].soyad);
        printf("Yas: ");
        scanf("%d",&x[i].yas);
        printf("Maas: ");
        scanf("%f",&x[i].maas);
        printf("Cinsiyet: ");
        scanf("%s",x[i].cinsiyet);
        printf("\n");
    }

    sirala(x,kisi);
    printf("\n\nAlfabetik olarak bilgiler:\n\n");
    listele(x,kisi);

}