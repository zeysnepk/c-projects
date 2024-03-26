#include<stdio.h>
#include<stdlib.h>


void dizi_sil(int seri[], int s, int no)
{
    int seri2[s];
    int i;
    for(i=0;i<s;i++)
    {
        if(i==no-1)
        {
            i++;
        }
        seri2[i]=seri[i];
        printf("%d ",seri2[i]);
    }
    
}

int main()
{
    int n;
    printf("kac adet sayidan olussun: ");
    scanf("%d",&n);
    int dizi[n];
    int i;
    srand();
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%-2d ",dizi[i]);
    }
    int sira;
    printf("\nHangi numara silinsin: ");
    scanf("%d",&sira);
    dizi_sil(dizi,n,sira);
}