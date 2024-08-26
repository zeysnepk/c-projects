#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define MAX 50
#define DEVAM 0
#define KAZAN 1
#define KAYBET -1
#define ran 30

char *alt_kelime;
char kapali_kelime[MAX];
int can=3;
int harf_sayisi=0;
int len=0;

void kelimeyi_kapat(char*);
void kelime_uzunluk();
void kelimeyi_bas();
void harf_al();
void harf_ac(char);
int kazan_kaybet();


int main()
{
    setlocale(LC_ALL, "Turkish");
    srand(time(NULL));
    
    int tur,x=-1,randomsayi,durum,i;
    char cevap[MAX];

    char meyve_sebze[][30]=
    {
        {"avakado"},{"pirasa"},{"karnabahar"},{"greyfurt"},{"bogurtlen"},{"karadut"},{"lahana"},{"mandalina"},{"portakal"},{"kereviz"},{"enginar"},{"bezelye"},{"sarimsak"},{"ananas"},{"ahududu"},{"seftali"},{"kayisi"},{"kirmizi lahana"},{"limon"},{"hurma"},{"cigdem"},{"kestane"},{"kuskonmaz"},{"zencefil"},{"bruksel lahanasi"},{"mantar"},{"dereotu"},{"maydanoz"},{"fasulye"},{"armut"}
    };
    char sehir[][30]=
    {
        {"istanbul"},{"roma"},{"new york"},{"tokyo"},{"barcelona"},{"washington"},{"paris"},{"madrid"},{"yozgat"},{"ardahan"},{"kayseri"},{"kocaeli"},{"trakya"},{"tekirdag"},{"samsun"},{"diyarbakir"},{"antalya"},{"amsterdam"},{"los angeles"},{"dubai"},{"toronto"},{"bangkok"},{"mumbai"},{"kahire"},{"berlin"},{"rio de janeiro"},{"lizbon"},{"vancouver"},{"buenos aires"},{"sanliurfa"}
    };
    char film[][50]=
    {
        {"kucuk kadinlar"},{"hizli ve ofkeli"},{"hayalet avcilari"},{"zindan adasi"},{"siyah giyen adamlar"},{"schindler'in listesi"},{"yesil yol"},{"star wars"},{"olu ozanlar dernegi"},{"forrest gump"},{"avatar"},{"yildizlararasi"},{"akil oyunlari"},{"karayip korsanlark"},{"matrix"},{"yuzuklerin efendisi"},{"kara sovalye"},{"esaretin bedeli"},{"oppenheimer"},{"sihirbazlar cetesi"},{"can dostum"},{"baslangic"},{"ay isiginda dans"},{"ozgurluk yolu"},{"prestij"},{"seytanin avukati"},{"yarinin dunyasi"},{"hayat güzeldir"},{"hazine adasi"},{"intikam pesinde"}
    };
    char dizi[][50]=
    {
        {"the walking dead"},{"house of cards"},{"how i met your mother"},{"the big bang theory"},{"vikings"},{"brooklyn nine nine"},{"peaky blinders"},{"the witcher"},{"narcos"},{"sherlock"},{"black mirror"},{"the crown"},{"stranger things"},{"the office"},{"friends"},{"breaking bad"},{"game of thrones"},{"yasak elma"},{"istanbullu gelin"},{"adini feriha koydum"},{"kara sevda"},{"kurtlar vadisi"},{"lucifer"},{"euphoria"},{"mr robot"},{"orphan black"},{"the good place"},{"the umbrella academy"},{"mindhunter"},{"better call saul"}
    };


    do
    {
        randomsayi=rand()%ran;
        printf("----------ADAM ASMACA OYUNUNA HOŞGELDİNİZ!!!----------\n\n");
        printf("Lütfen kategori belirleyiniz:\n1 --> Meyve/Sebze\n2 --> Şehir\n3 --> Film\n4 --> Dizi\n");
        scanf("%d",&tur);

        switch(tur)
        {
            case 1: alt_kelime=(char*)malloc(MAX*sizeof(char));
                    strcpy(alt_kelime, meyve_sebze[randomsayi]);
                    x=0;
                        break;
            case 2: alt_kelime=(char*)malloc(MAX*sizeof(char));
                    strcpy(alt_kelime, sehir[randomsayi]);
                    x=0;
                        break;
            case 3: alt_kelime=(char*)malloc(MAX*sizeof(char));
                    strcpy(alt_kelime, film[randomsayi]);
                    x=0;
                        break;
            case 4: alt_kelime=(char*)malloc(MAX*sizeof(char));
                    strcpy(alt_kelime, dizi[randomsayi]);
                    x=0;
                        break;
            default: printf("\nGeçersiz giriş lütfen tekrar deneyiniz.\n");
        }   
    }while(x != DEVAM);

    kelimeyi_kapat(alt_kelime);
    kelime_uzunluk();
    kelimeyi_bas();
    harf_al();
    durum=kazan_kaybet();

do
{
    durum=kazan_kaybet();
    if(durum == KAZAN)
    {
        printf("\n\n----------TEBRİKLER KAZANDINIZ!!!----------\n\n");
    }
    else if(durum == KAYBET)
    {
        printf("\n\n----------MAALESEF KAYBETTİNİZ----------\n\n");
    }
    else
    {
        kelimeyi_bas();
        harf_al();
    }
} while (durum == DEVAM);

    free(alt_kelime);
}

void kelimeyi_kapat(char *kelime)
{
    int i;
    for(i=0;*(kelime+i);i++)
    {
        if(*(kelime+i) == 32)
        {
            harf_sayisi++;
            kapali_kelime[i]=32;
        }
        else
        kapali_kelime[i] = '-';
    }
}

void kelime_uzunluk()
{
    int i;
    for(i=0;*(alt_kelime+i);i++)
    {
        if(isprint(*(alt_kelime+i)))
        {   
            len++;
        }
    }

}

void kelimeyi_bas()
{
    int i;
    for(i=0;*(kapali_kelime+i);i++)
    {
        printf("%c ",kapali_kelime[i]);
    }
}

void harf_al()
{

    char harf;
    printf("\nLütfen bir harf giriniz: ");
    scanf(" %c",&harf);

    harf=tolower(harf);
    
    if(harf >= 'a' && harf <= 'z')
    {
        harf_ac(harf);
    }
    else
    {
        printf("Gecersiz harf lutfen tekrar deneyiniz:\n");
        harf_al();
    }
}

void harf_ac(char harf)
{
    int i,x=0;

    for(i=0;*(alt_kelime+i);i++)
    {
        if(harf == *(alt_kelime+i))
        {
            harf_sayisi++;
            kapali_kelime[i] = harf;
            x=1;
        }
    }   
    if(x == 0)
    {
        can--;
        printf("\nCaniniz azalmistir\nKalan Can = %d\n\n",can);
    }
}

int kazan_kaybet()
{
    if(can >0 && harf_sayisi == len)
    {
        return KAZAN;
    }
    else if (can == 0)
    {
        return KAYBET;
    }
    else
        return DEVAM;
}





