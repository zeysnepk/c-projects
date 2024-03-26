#include<stdio.h>
#include<stdlib.h>

int max(int seri[], int s)
{
    int max;
    max=seri[0];
    int i;
    for(i=0;i<s;i++)
    {
        if(seri[i]>max)
        {
            max=seri[i];
        }
    }
    return max;
}

int min(int seri[], int s)
{
    int min;
    min=seri[1];
    int i;
    for(i=0;i<s;i++)
    {
        if(seri[i]<min)
        {
            min=seri[i];
        }
    }
    return min;
}


int main()
{
    int n,i;
    printf("n sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[n];
    
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%1000;
        printf("%d ",dizi[i]);
    }
    printf("\nEn buyuk deger = %d\n",max(dizi,n));
    printf("\nEn kucuk deger = %d\n",min(dizi,n));

   
}