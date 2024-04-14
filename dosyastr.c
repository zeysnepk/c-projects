#include <stdio.h>

struct ogrenci
{
    char adsoyad[30];
    char ders[20];
    int vize1,vize2,finalnotu;
};

int main()
{
    FILE *dosya;
    int N,i;
    float ort=0.0;

    printf("Lutfen ogrenci sayisini giriniz: ");
    scanf("%d",&N);

    struct ogrenci bilgi[N];

    dosya=fopen("dersler.txt","w");

    for(i=0;i<N;i++)
    {
        printf("%d. Ogrenci icin,\n",i+1);

        printf("Ad-Soyad: ");
        fflush(stdin);
        gets(bilgi[i].adsoyad);

        printf("Ders: ");
        
        gets(bilgi[i].ders);

        printf("Vize1: ");
        scanf("%d",&bilgi[i].vize1);

        printf("Vize2: ");
        scanf("%d",&bilgi[i].vize2);

        printf("Final: ");
        scanf("%d",&bilgi[i].finalnotu);

        ort=(float)(bilgi[i].vize1*1/5+bilgi[i].vize2*1/5+bilgi[i].finalnotu*3/5);

        fprintf(dosya,"%d. Ogrenci,\nAd-Soyad: %s\nDers: %s\nVize1: %d\nVize2: %d\nFinal: %d\nOrtalama: %.2f\n\n",i+1,bilgi[i].adsoyad,bilgi[i].ders,bilgi[i].vize1,bilgi[i].vize2,bilgi[i].finalnotu,ort);
    }

    fclose(dosya);

}