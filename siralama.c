#include<stdio.h>
#include<stdlib.h>


void sirala(int A[], int adet)
{
    int i,j;
    int m;
    for(i=0;i<adet-1;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(A[j]>A[j+1])
            {
                m=A[j];
                A[j]=A[j+1];
                A[j+1]=m;
            }
        }
    }

    for(i=0;i<adet;i++)
    {
        printf("%d ",A[i]);
    }
    
}

int main()
{
    int n;
    printf("N sayisi giriniz: ");
    scanf("%d",&n);
    int i;
    int dizi[n];
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    printf("\n");
    sirala(dizi,n);
}