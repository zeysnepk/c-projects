#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void birlestir(int A[], int B[], int C[], int N, int K)
{
    int i;
    for(i=0;i<N+K;i++)
    {
        if(i<N)
        {
            C[i]=A[i];
        }
        else
        {
            C[i]=B[i-N];
        }
        printf("C[%d] = %d\n",i,C[i]);
    }
    

}


int main()
{
    int n,k,y,i;
    printf("A dizisinin eleman sayisini giriniz: ");
    scanf("%d",&n);
    int a[n];
    printf("A dizisinin elemanlarini giriniz:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("B dizisinin eleman sayisini giriniz: ");
    scanf("%d",&k);
    int b[k];
    printf("B dizisinin elemanlarini giriniz:\n");
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
    y=n+k;
    int c[y];
    
    birlestir(a,b,c,n,k);
}