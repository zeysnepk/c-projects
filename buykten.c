#include<stdio.h>


void buyukten(int A[])
{
    int i,j,m;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(A[j]<A[j+1])
            {
                m=A[j];
                A[j]=A[j+1];
                A[j+1]=m;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
}


int main()
{
    int dizi[5];
    int i;
    printf("Lutfen dizi elemanlarini giriniz:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\n");
    buyukten(dizi);
}