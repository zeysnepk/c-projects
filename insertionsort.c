#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>



int main()
{
    int i,j,gecici,N;

    printf("Kac sayi: ");
    scanf("%d",&N);

    int dizi[N];

    printf("\nDizi elemanlarini giriniz:\n");

    for(i=0;i<N;i++)
    {
        scanf("%d",&dizi[i]);
    }

    for(i=1;i<N;i++)
    {
        j=i;
        while(j>0 && dizi[j] < dizi[j-1] )
        {
            gecici=dizi[j];
            dizi[j]=dizi[j-1];
            dizi[j-1]=gecici;
            j--;
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",dizi[i]);
    }
}