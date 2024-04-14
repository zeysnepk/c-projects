#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *dosya;
    FILE *dosya2;

   char karakter;

    dosya=fopen("bilgiler.txt","r");
    dosya2=fopen("buyuk.txt","w");

    if(dosya==NULL)
    {
        printf("Dosya Bulunamadi\n");
    }
    else
    {
        karakter=fgetc(dosya);
        while(karakter != EOF)
        {
            if(karakter >= 'a' && karakter <='z')
            {
                fprintf(dosya2,"%c",karakter-32);
            }
            else
            {
                fprintf(dosya2,"%c",karakter);
            }
            karakter=fgetc(dosya);
        }
    }
    fclose(dosya);
    fclose(dosya2);
}
