#include<stdio.h>

/*
    Girilen sayının basamak rakamlarını sondan
    başlayarak alt alta sıralar.
*/

int main()
{
    int num, temp, basamak_sayisi, i=10;

    printf("Bir sayi giriniz: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        temp /= 10;
        basamak_sayisi = (num % i)/(i/10);
        i *= 10;
        printf("%d\n", basamak_sayisi);
    }
}
