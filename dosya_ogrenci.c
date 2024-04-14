#include <stdio.h>


int main()
{
    FILE *dosya;
    int sayi,i;

    printf("Kac ogrenci girilecektir: ");
    scanf("%d",&sayi);

    char ogrno[sayi][5],isim[sayi][20];
    int not[sayi];

    for(i=0;i<sayi;i++)
        {
            printf("Lutfen %d.ogrencinin bilgilerini doldurunuz\n",i+1);
            printf("Ogrenci Numarasi: ");
            scanf("%s",ogrno[i]);
            printf("Ogrenci İsmi: ");
            scanf("%s",isim[i]);
            printf("Ogrenci Notu: ");
            scanf("%d",&not[i]);
        }
    
    if((dosya=fopen("ogrencibilgi.txt","w"))!=NULL)
    {
        for(i=0;i<sayi;i++)
        {
            fprintf(dosya,"%s\t%s\t%d\n",ogrno[i],isim[i],not[i]);
        }
    }
    else
    {
        printf("Dosya bulunamadi");
    }
    fclose(dosya);

}