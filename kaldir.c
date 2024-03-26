#include<stdio.h>


void cikar(int A[],int y)
{
    int i,j,x=1;
    for(i=0;i<5;i++)
    {
        if(A[i]==y)
        {
            for(j=i;j<5;j++)
            {
                if(A[j+1]!=y)
                {
                A[j]=A[j+1];
                }
                else
                {
                    x++;
                    A[j]=A[j+1];
                    A[j]=A[j+1];
                }
            }
            
        }
    }
    for(i=0;i<5-x;i++)
    {
        printf("%d ",A[i]);
    }
    
}

int main()
{
    int i,dizi[5],x;
    printf("Lutfen dizi elemanlarini giriniz:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("Cikarmak istediginiz elemani giriniz: ");
    scanf("%d",&x);
    cikar(dizi,x);
}