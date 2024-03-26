#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float fonk_ort(int *dizi, int boyut)
{
    int i,top=0;
    float ort;
    for(i=0;i<boyut;i++)
    {
        top=top+dizi[i];
    }
    ort=(float)top/boyut;
    return ort;
}

int main()
{
    int n,i;
    float ortalama;
    printf("Eleman sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[n];
    printf("Elemanlari giriniz:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("\n");
    ortalama=fonk_ort(&dizi,n);
    printf("Ortalama = %.2f\n",ortalama);
}