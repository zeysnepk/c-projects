#include<stdio.h>
#include<stdlib.h>



int main()
{
    int sayi;
    int faktoriyelSonuc=1;

    printf("Faktoriyelini almak istediginiz sayiyi giriniz..");
    scanf("%d",&sayi);

    int kullanicininGirdigiSayi=sayi;


if (sayi>=0){
    while(sayi>0){
        if (sayi==0)
        {
            faktoriyelSonuc*=1;
        }
        else {
            faktoriyelSonuc*=sayi;
            sayi--;
        }
        
    }
    printf("%d!=%d",kullanicininGirdigiSayi,faktoriyelSonuc);
 
}
else {
    printf("Lutfen 0 dan buyuk degerler giriniz..");
}


return 0;

}