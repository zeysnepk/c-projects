#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void evet_hayir(char *secim, int *puan)
{
    if((strcmp(secim,"EVET")==0) || (strcmp(secim,"Evet")==0) || (strcmp(secim,"evet")==0) )
    {
        printf("Devam ediliyor\n\n");
    }
    else if((strcmp(secim,"HAYIR")==0) || (strcmp(secim,"Hayır")==0) || (strcmp(secim,"hayır")==0) || (strcmp(secim,"HAYİR")==0) || (strcmp(secim,"Hayir")==0) || (strcmp(secim,"hayir")==0))
    {
       printf("Programdan cikiliyor...\nSon puan: %d\n",*puan);
        exit(0);
    }
    else
    {
        printf("Gecersiz cevap\nTekrar deneyiniz\n");
        printf("Devam etmek ister misin?: ");
        scanf("%s",secim);
        evet_hayir(secim,puan);
    }
}

void dogru_yanlis(char rep, char *cevap, int *can, int *puan)
{
    char lowcase[]={'a','b','c','d'};
    char upcase[]={'A','B','C','D'};
    char kopya;
    int i=0,deger=0;
    char tekrar;
    
    yine : 
    kopya=rep;
    for(i=0;i<4;i++)
    {
        if(rep==lowcase[i] || rep==upcase[i])
        {
            deger=1;
        }
    }

    if(deger==1)
    {
        if(kopya==cevap[0] || kopya==cevap[1])
        {
            printf("Tebrikler doğru cevap!!\n\n");
            *puan+=10;
        }
        else
        {
            (*can)--;
            printf("Yanlış cevap :(\nKalan can: %d\n\n",*can);
            if(*can==0)
            {
                printf("Can bitmistir\nSon Puan: %d\nProgramdan çıkış yapılıyor...\n\n",*puan);
            }
        }
    }
    else
    {
        printf("Öyle bir şık yok maalesef:(\nTekrar deneyiniz\n\n");
        printf("Geçerli bir şık giriniz: ");
        scanf(" %c",&rep);
        goto yine;
    }
}

void giris()
{
    char sik;
    int puan = 0;
    int can=3;
    char cevap[3];
    char secim[20];
    printf("\nGiriş Başarılı\nBilgi yarışmasına yönlendiriliyorsunuz...\nBilgi yarışmasına hoşgeldiniz!!\nLütfen cevap olarak seçtiğiniz şıkkı yazınız\n\n");
    printf("1-)Birinci Dünya Savaşı'nın başladığı yıl nedir?\nA)1914\nB)1923\nC)1915\nD)1918\n");
    scanf(" %c", &sik);
    cevap[0]='A';
    cevap[1]='a';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("2-)""Thriller"" albümüyle tanınan pop müzik kralı kimdir?\nA)Madonna\nB)Lady Gaga\nC)Michael Jackson\nD)Elvis Presley\n");
    scanf(" %c", &sik);
    cevap[0]='C';
    cevap[1]='c';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("3-)FIFA Dünya Kupası'nı en çok kaç kez kazanan milli futbol takımı hangisidir?\nA)Almanya\nB)Arjantin\nC)Brezilya\nD)İtalya\n");
    scanf(" %c", &sik);
    cevap[0]='C';
    cevap[1]='c';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("4-)Olimpiyat oyunlarına ev sahipliği yapan ilk ülke hangisidir?\nA)Amerika\nB)Norveç\nC)İngiltere\nD)Yunanistan\n");
    scanf(" %c", &sik);
    cevap[0]='B';
    cevap[1]='b';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("5-)""Dune"" serisinin yazarı kimdir?\nA)Sebastian Vettel\nB)Frank Herbert\nC)Ayrton Senna\nD)Michael Schumacher\n");
    scanf(" %c", &sik);
    cevap[0]='B';
    cevap[1]='b';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("6-)Hangisi bir programlama dili değildir?\nA)Lenix\nB)Ruby\nC)Fortran\nD)Pascal\n");
    scanf(" %c", &sik);
    cevap[0]='A';
    cevap[1]='a';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("7-)Bir roketin itme gücü hangi fizik kavramıyla tanımlanır?\nA)Coulomb'un Yasası\nB)Archimedes Prensibi\nC)Einstein'ın İzafiyet Teorisi\nD)Newton'un Üçüncü Hareket Yasası\n");
    scanf(" %c", &sik);
    cevap[0]='D';
    cevap[1]='d';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("8-)""Apocalypse Now"" filmi hangi savaşı konu alır?\nA)Kore Savaşı\nB)Vietnam Savaşı\nC)Soğuk Savaş\nD)İkinci Dünya Savaşı\n");
    scanf(" %c", &sik);
    cevap[0]='B';
    cevap[1]='b';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("9-)Unix işletim sistemi geliştirilmiştirken hangi dili kullanılmıştır?\nA)Java\nB)C\nC)Python\nD)Pascal\n");
    scanf(" %c", &sik);
    cevap[0]='B';
    cevap[1]='b';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("10-)""Rhapsody in Blue" "bestesiyle ünlü besteci kimdir?\nA)Ludwig van Beethoven\nB)Wolfgang Amadeus Mozart\nC)George Gershwin\nD)Johann Sebastian Bach\n");
    scanf(" %c", &sik);
    cevap[0]='C';
    cevap[1]='c';
    dogru_yanlis(sik,cevap,&can,&puan);
    printf("Devam etmek ister misin?: ");
    scanf("%s",secim);
    evet_hayir(secim,&puan);
    printf("Program basari ile sona ermistir\nTebrikler...\nSon Puan: %d\n",puan);

    
}

void kayit(char *yeni_kullanici, char *yeni_sifre)
{
    char giris_kullanici[20];
    char giris_sifre[20];
    int no;
    printf("Lutfen bir kullanici adi olusturunuz: ");
    scanf("%s",yeni_kullanici);
    printf("Lutfen bir sifre belirleyiniz: ");
    scanf("%s",yeni_sifre);
    printf("Tekrar giris yapmayi deneyiniz\n");
    tekrar:
    printf("Lutfen kullanici adinizi giriniz:\n");
    scanf("%s",giris_kullanici);
    printf("Lutfen sifrenizi giriniz:\n");
    scanf("%s",giris_sifre);
    if ((strcmp(yeni_kullanici, giris_kullanici) == 0) && (strcmp(giris_sifre,yeni_sifre)==0))
    {
        giris();
    }
    else
    {
        printf("\nHatali giris\nTekrar denemek icin 1 e basiniz: ");
        scanf("%d", &no);
        if (no == 1)
        {
            goto tekrar;
        }
        else
        {
            printf("Lutfen 1 e basin\n");
        }
    }
}

void bilgiler()
{
    int no;
    char kullanici_adi[] = "zeysnepk";
    char sifre[] = "123";
    char giris_kullanici[50];
    char sifre_kullanici[50];
tekrar:
    printf("Lutfen kullanici adinizi giriniz:\n");
    scanf("%s", giris_kullanici);
    printf("Lutfen sifrenizi giriniz:\n");
    scanf("%s", sifre_kullanici);
    if (strcmp(kullanici_adi, giris_kullanici) == 0)
    {
        giris();
    }
    else
    {
        printf("\nHatali giris\nTekrar denemek icin 1 e kayit olmak icin 2 ye basiniz: ");
        scanf("%d", &no);
        if (no == 1)
        {
            goto tekrar;
        }
        else if (no == 2)
        {
            kayit(kullanici_adi,sifre);
        }
    }
}



    int main()
    {
        setlocale(LC_ALL, "Turkish");
        bilgiler();
    }
