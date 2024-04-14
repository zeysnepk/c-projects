#include <stdio.h>


int main()
{
    FILE *dosya;
    char cumle[50];
    char *karakter;

    dosya=fopen("satir_satir.txt","r");

    if(dosya==NULL)
    {
        printf("Dosya bulunamadi\n");
    }
    else
    {
        karakter=fgets(cumle,50,dosya);
        while(karakter!=NULL)
        {
          
          printf("%s",cumle);
          karakter=fgets(cumle,50,dosya);
        }
    }
    fclose(dosya);
}