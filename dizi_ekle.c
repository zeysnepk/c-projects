#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void dizi_ekle(int A[], int a, int b)
{
    int i,c;
    for(i=5;i>=a;i--)
    {
        A[i]=A[i-1];
    }
    A[a-1]=b;
    for(i=0;i<=5;i++)
    {
        printf("%d ",A[i]);
    }
}



int main()
{
    int dizi[5]={1,4,2,6,8};
    int x,y;
    printf("Sira numarasini giriniz: ");
    scanf("%d",&x);
    printf("Onun yerine eklemek istediginiz sayiyi giriniz: ");
    scanf("%d",&y);
    dizi_ekle(dizi,x,y);

}