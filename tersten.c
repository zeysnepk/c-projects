#include<stdio.h>
#include<math.h>
#include<stdlib.h>



int main()
{
    char kelime[100];
    char *ptr,*pt;
    printf("Bir kelime giriniz:\n");
    scanf("%s",kelime);
    ptr=kelime;
    for(pt=kelime;*pt;pt++);
    pt--;
    int kontrol=1;
    for(;ptr<pt && kontrol==1;ptr++,pt--)
    {
        if(*ptr!=*pt)
        {
            kontrol=0;
        }
    }
    if(kontrol)
    {
        printf("Girilen kelime bir palendromdur\n");
    }
    else
    {
        printf("Girilen kelime palendrom degildir\n");
    }
    

}