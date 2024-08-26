#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct karmasik_sayi
{
    float reel;
    float sanal;
}karmasik;

void topla(karmasik n1, karmasik n2)
{
    printf("\nToplam: %.2f+%.2fi",(n1.reel+n2.reel),(n1.sanal+n2.sanal));
}

int main()
{
    karmasik n1;
    karmasik n2;
    char bos;
    
    printf("Lutfen ilk karmasik sayinizi giriniz: ");
    scanf("%f%c%f%c",&n1.reel,&bos,&n1.sanal,&bos);
    printf("\nLutfen ikinci karmasik sayinizi giriniz: ");
    scanf("%f%c%f%c",&n2.reel,&bos,&n2.sanal,&bos);

    topla(n1,n2);

}