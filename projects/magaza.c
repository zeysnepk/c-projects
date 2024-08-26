#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct urun
{
    int kod;
    float fiyat;
};

struct isci
{
    char isci_ad[20];
    char isci_soyad[20];
    int isci_yas;
};

struct magaza
{
    char magaza_ad[20];
    char sokak[20];
    char mahalle[20];
    int no;
    float tutar;
    struct isci isci_girdi[3];
    struct urun urun_girdi[5];
};


void urun_doldur(struct urun *urun_girdi)
{
    printf("Urun Kod: ");
    scanf("%d",&urun_girdi->kod);
    printf("Urun Fiyat: ");
    scanf("%f",&urun_girdi->fiyat);
}

void isci_doldur(struct isci *isci_girdi)
{
    printf("Isci Ad: ");
    fflush(stdin);
    scanf("%s",isci_girdi->isci_ad);
    printf("Isci Soyad: ");
    fflush(stdin);
    scanf("%s",isci_girdi->isci_soyad);
    printf("Isci Yas: ");
    scanf("%d",&isci_girdi->isci_yas);
}

void magaza_doldur(struct magaza *girdi)
{
    printf("Magaza Ad: ");
    scanf("%s",girdi->magaza_ad);
    printf("Magaza Sokak: ");
    scanf("%s",girdi->sokak);
    printf("Magaza Mahalle: ");
    scanf("%s",girdi->mahalle);
    printf("Magaza Telefon No: ");
    scanf("%d",&girdi->no);
    printf("Magaza Satis Tutari: ");
    scanf("%f",&girdi->tutar);


    int i;
    for(i=0;i<3;i++)
    {
        printf("%d. Isci:\n",i+1);
        isci_doldur(&girdi->isci_girdi[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d. Urun:\n",i+1);
        urun_doldur(&girdi->urun_girdi[i]);
    }
}

void yasli(struct magaza *girdi)
{
    int i,j;
    int yas=0;
    char yas_isim[20];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(girdi[i].isci_girdi[j].isci_yas > yas) 
            {
                yas=girdi[i].isci_girdi[j].isci_yas;
                strcpy(yas_isim,girdi[i].isci_girdi[j].isci_ad);
            }
        }
    }
    printf("\nEn yasli isci: %s\n",yas_isim);

}

void ort_fiyat(struct magaza *girdi)
{
    int i;
    float top=0,ort=0;

    for(i=0;i<5;i++)
    {
        top+=girdi->urun_girdi->fiyat;
    }
    ort=top/5;
    printf("Ortalama fiyat= %.2f\n",ort);
}

void yazdir_mahalle(struct magaza *girdi)
{
    printf("\n%s",girdi->mahalle);
}

void max_satis(struct magaza *girdi)
{
    int i,j;
    float max=0;
    for(i=0;i<2;i++)
    {
        if(girdi[i].tutar > max)
        {
            max=girdi[i].tutar;
            j=i;

        }
    }
    printf("\nEn fazla satisa sahip magaza bilgileri:\n");
    printf("Magaza Adi: %s\n",girdi[j].magaza_ad);
    printf("Magaza Sokak: %s\n",girdi[j].sokak);
    printf("Magaza Mahalle: %s\n",girdi[j].mahalle);
    printf("Magaza Telefon No: %d\n",girdi[j].no);
    printf("Magaza Tutar: %.2f\n",girdi[j].tutar);


}

int main()
{
    struct magaza girdi[2];
    int i;
    char mahal[20];
    for(i=0;i<2;i++)
    {
        printf("%d. Magaza:\n",i+1);
        magaza_doldur(&girdi[i]);
    }
    yasli(girdi);
    printf("\n");
    for(i=0;i<2;i++)
    {
        printf("%d.Magaza:\n",i+1);
        ort_fiyat(&girdi[i]);
        yazdir_mahalle(&girdi[i]);
        printf("\n");
    }
    max_satis(girdi);

}