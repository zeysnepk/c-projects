#include<stdio.h>
#include<stdlib.h>


void sira(int A[], int adet);
{
    int B[adet];
    int i,j;
    int m;
    for(i=0;i<adet-1;i++)
    {
        B[i]=A[i];
    }
    for(i=0;i<adet-1;i++)
    {
        for(j=0;j<adet-1;j++)
        {
          if(A[i]<B[j])
        {
            m=A[i];
            A[i]=B[j];
            A[i+1]=m;
        }
        }
    }
}

int main()
{
    int n;
    printf("n sayisi giriniz: ");
    scanf("%d",&n);
    int dizi[n];
    int i;
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
    }
    printf("\n");
    sira(dizi,n);
}