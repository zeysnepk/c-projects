#include<stdio.h>
#include<stdlib.h>

void sirala(int A[], int adet)
{
    int B[adet];
    int i,j,m;
    for(i=0;i<adet;i++)
    {
        B[i]=A[i];
    }
    for(i=0;i<adet;i++)
    {
        for(j=0;j<adet;j++)
        {
            if(A[i]<B[j])
            {
                m=A[i];
                A[i]=B[j];
                A[j]=m;
                B[j]=m;
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
    int dizi[n];
    int i;
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    printf("\n");
    sirala(dizi,n);
}