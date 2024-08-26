#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct yarisma
{
    char ad[50];
    char soyad[50];
    float puan[10];
    float sonuc;
};

float puan_hesapla(struct yarisma performans)
{
    float top=0;
    float ort=0;
    int i;
    int max=performans.puan[0];
    int min=performans.puan[0];
    for(i=0;i<10;i++)
    {
        
        if(performans.puan[i]>max)
        {
            max=performans.puan[i];
        }
        if(performans.puan[i]<min)
        {
            min=performans.puan[i];
        }
        top+=performans.puan[i];
        
    }
    ort=top/8;
    return ort;
}

int main()
{
    int kisi;
    printf("Yarismaya katilan kisi sayisi: ");
    scanf("%d", &kisi);
    struct yarisma performans[kisi];
    int i, j, k;
    for (i = 0; i < kisi; i++)
    {
        printf("%d. yarismacinin bilgileri:\n", i + 1);
        printf("Yarismacicin adi: ");
        scanf("%s", performans[i].ad);
        printf("Yarismacicin soyadi: ");
        scanf("%s", performans[i].soyad);
        printf("Puanlari(6 uzerinden) giriniz:\n");

        printf("%d. yarismacinin puanlari:\n", i + 1);
        for (j = 0; j < 10; j++)
        {

            scanf("%f", &performans[i].puan[j]);
            while (performans[i].puan[j] > 6 || performans[i].puan[j] < 0)
            {
                printf("Lutfen gecerli bir puan giriniz!\n");
                scanf("%f", &performans[i].puan[j]);
            }
        }
    }
    printf("\n\n");

    float max_puan=performans[0].sonuc;
    int max_deger;
    for(i=0;i<kisi;i++)
    {
        performans[i].sonuc=puan_hesapla(performans[i]);
        printf("%d. yarismacinin sonuclari:\n",i+1);
        printf("Adi= %s\nSoyadi= %s\nSonuc= %.2f\n",performans[i].ad,performans[i].soyad,performans[i].sonuc);
        printf("***************************************\n\n");
        if(performans[i].sonuc>max_puan)
        {
            max_puan=performans[i].sonuc;
            max_deger=i;
        }
    }

    printf("\n\nKazanan Yarismaci ------>%.2f puaniyla %s %s \nTebrikler!!!!\n",max_puan,performans[max_deger].ad,performans[max_deger].soyad);
}