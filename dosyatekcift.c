#include <stdio.h>


int main()
{
    FILE *dosya;
    int n,i;
    char *karakter,okuma[20];

    dosya=fopen("tekcift.txt","w");

    do
    {
        printf("Lutfen bir sayi giriniz: ");
        scanf("%d",&n);
    }while(n<=0);

    fprintf(dosya,"Cift Sayilar\n");
    for(i=0;i<=n;i+=2)
    {
        fprintf(dosya,"%d\n",i);
    }

    fprintf(dosya,"\nTek Sayilar\n");
    for(i=1;i<=n;i+=2)
    {
        fprintf(dosya,"%d\n",i);
    }

    fclose(dosya);

    dosya=fopen("tekcift.txt","r");

    if(dosya==NULL)
    {
        printf("Dosya bulunamadi\n");
    }
    else
    {
        karakter=fgets(okuma,20,dosya);
        while(karakter!=NULL)
        {
            printf("%s",okuma);
            karakter=fgets(okuma,20,dosya);
        }
    }
    fclose(dosya);

    
}