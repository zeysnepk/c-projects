#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct musteri
{
    char isim[20];
    char soyisim[20];
    int kahvalti;
    int aksam_yemegi;
    int otel_hizmeti;


};

int main()
{
    struct musteri org[4];
    int i,secenek,secenek3,kahvaltisayac=0,toplam=0;
    char secenek2[20],secenek4[20];
    int sayac[20],j=0,n=0;
    
    for(i=0;i<4;i++)
    {
        org[i].otel_hizmeti=0;
        printf("%d. Musteri:\n",i+1);
        printf("Isim: ");
        fflush(stdin);
        scanf("%s",org[i].isim);
        printf("Soyisim: ");
        fflush(stdin);
        scanf("%s",org[i].soyisim);
        printf("Hangi secenegi secmek istersiniz(kahvalti:1,aksam yemegi:2,kahvalti+aksam yemegi:3,hicbiri:4): ");
        yeniden:
        scanf("%d",&secenek);
        switch(secenek)
        {
            case 1: org[i].kahvalti=15; kahvaltisayac++; org[i].aksam_yemegi=0;  break;
            case 2: org[i].kahvalti=0; org[i].aksam_yemegi=35; break;
            case 3: org[i].kahvalti=15; kahvaltisayac++;org[i].aksam_yemegi=35; break;
            case 4: org[i].kahvalti=0; org[i].aksam_yemegi=0; break;
            default: printf("Lutfen gecerli bir secenek giriniz: ");goto yeniden;break;
        }
        printf("Otel hizmeti almak ister misiniz?: ");
        fflush(stdin);
        scanf("%s",secenek2);
        if((strcmp(secenek2,"EVET") == 0) || (strcmp(secenek2,"Evet") == 0) || (strcmp(secenek2,"evet") == 0) )
        {
            printf("Otel hizmeti olarak 2 secenek mevcuttur(2 yildizli otel(75 euro): 1, 3 yildizli otel (100 euro): 2)\nLutfen otel secenegini seciniz: ");
            tekrar:
            scanf("%d",&secenek3);
            if(secenek3==1)
            {
                org[i].otel_hizmeti=75;
                sayac[j]=i;
                j++;
                n++;
            }
            else if(secenek3==2)
            {
                org[i].otel_hizmeti=100;
            }
            else
            {
                printf("Lutfen gecerli bir secenek giriniz: ");
                goto tekrar;
            }
            printf("Otel hizmetinde ayni odadan 2 kisi yararlanabilir. Dahil edilsin mi?: ");
            scanf("%s",secenek4);
            if((strcmp(secenek2,"EVET") == 0) || (strcmp(secenek2,"Evet") == 0) || (strcmp(secenek2,"evet") == 0) )
            {
                org[i].aksam_yemegi*=2;
                org[i].kahvalti*=2;
            }
        }
        
    }
    printf("******************************************************\n");
    printf("2 yildizli otelde konaklayan musteriler:\n");
    for(j=0;j<n;j++)
    {
        printf("Soyad: %s, Ad: %s\n",org[sayac[j]].isim,org[sayac[j]].soyisim);
    }
    printf("Total siparis edilen kahvalti sayisi: %d\n",kahvaltisayac);
    for(i=0;i<4;i++)
    {
        toplam=org[i].aksam_yemegi+org[i].kahvalti+org[i].otel_hizmeti;
        printf("%d. Musterinin hesabi: %d\n",i+1,toplam);
    }

}