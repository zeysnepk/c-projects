#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct oyuncu
{
    char ad[20];
    char soyad[20];
    int yas;
    int seviye;
};

struct ekip
{
    char ekip_isim[20];
    struct oyuncu kisi1;
    struct oyuncu kisi2;

};

void yazdir_oyuncu(struct oyuncu *x)
{
    printf("Ad : %s\n",x->ad);
    printf("Soyad : %s\n",x->soyad);
    printf("Yas : %d\n",x->yas);
    printf("Seviye : %d\n",x->seviye);
}

void yazdir_ekip(struct ekip *takim)
{
    printf("Ekip adi: %s\n",takim->ekip_isim);
    printf("Oyuncu 1:\n");
    yazdir_oyuncu(&takim->kisi1);
    printf("Oyuncu 2:\n");
    yazdir_oyuncu(&takim->kisi2);
    
}

void girdi_oyuncu(struct oyuncu *gir)
{
    printf("Ad: ");
    scanf("%s",gir->ad);
    printf("Soyad: ");
    scanf("%s",gir->soyad);
    printf("Yas: ");
    scanf("%d",&gir->yas);
    printf("Seviye: ");
    scanf("%d",&gir->seviye);
}

void girdi_ekip(struct ekip *takim)
{
    printf("Ekip adini giriniz: ");
    scanf("%s",takim->ekip_isim);
    printf("Oyuncu 1:\n");
    girdi_oyuncu(&takim->kisi1);
    printf("Oyuncu 2:\n");
    girdi_oyuncu(&takim->kisi2);
}

int main()
{
    int i;
    struct ekip takim[2];
    for(i=0;i<2;i++)
    {
        printf("Ekip %d:\n",i+1);
        girdi_ekip(&takim[i]);
    }
    printf("\nEkip ve Oyuncu Bilgileri\n");

    for(i=0;i<2;i++)
    {
        printf("Ekip %d:\n",i+1);
        yazdir_ekip(&takim[i]);
        printf("\n");
    }
}