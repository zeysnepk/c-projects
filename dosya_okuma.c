#include <stdio.h>

/*
fgetc()  ->   Dosyadan tek bir karakter okur
fscanf() ->   Dosyadan karakter dizisi okur



    FILE *dosya;
    char karakterİ
    dosya=fopen("deneme.txt","r");
    if(dosya!=NULL)
    {
        karakter=fgetc(dosya);
        printf("%c",karakter);
    }
    else
    {
        printf("Dosya bulunamadi");
    }
    fclose(dosya);

    FILE *dosya;
    char kelime[20][20];
    int i=0;
    if(dosya=fopen("deneme.txt","r")!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s",kelime[i]);
            printf("%s ",kelime[i]);
            i++;
        }
    }
    else
    {
        printf("Dosya bulunamadi");
    }
    fclose(open);
*/


int main()
{
    FILE *dosya;
    char k1[20][20];
    int n,i=0,j=0;

    dosya=fopen("deneme.txt","w");
    fprintf(dosya,"Bu bir yeniden yazma denemesidir");
    fclose(dosya);

    if((dosya=fopen("deneme.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {
            while(k1[i][j]!='\0')
            {
                k1[i][j]=fgetc(dosya);
                printf("%c",k1[i][j]);
                j++;
            }
            i++;
        }
    }
    else
    {
        printf("Dosya bulunamadi\n");
    }
    fclose(dosya);
}