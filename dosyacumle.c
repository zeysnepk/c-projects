#include <stdio.h>

int main()
{
    FILE *dosya_yaz, *dosya_oku;
    char cumle[20][20];
    int i=0,n;
    char karakter;
    
    if((dosya_yaz=fopen("bil.txt","w")))
    {
        printf("Lutfen bir cumle giriniz: ");
        gets(cumle);

        printf("Kac adet alt alta basisin: ");
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            fprintf(dosya_yaz,"%s\n",cumle);
        }
        fclose(dosya_yaz);

        dosya_oku=fopen("bil.txt","r");

        karakter=getc(dosya_oku);
        while(karakter!=EOF)
        {
            putchar(karakter);
            karakter=getc(dosya_oku);
        }

        fclose(dosya_oku);
        
    }
    else
    {
        printf("Dosya bulunamadi");
    }


}