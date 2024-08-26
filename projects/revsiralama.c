#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

void sirala(int *dizi, int bas, int N)
{
    int i;
    int gecici;
    if(N!=0)
    {

    for(i=bas;i<N+bas;i++)
    {
        if(*(dizi+bas)>*(dizi+i))
        {
            gecici=*(dizi+bas);
            *(dizi+bas)=*(dizi+i);
            *(dizi+i)=gecici;
        }
    }
    printf("%d ",*(dizi+bas)); 
    sirala(dizi,bas+1,N-1);
    }
    
}

int main()
{
    int n,i;

    printf("Kac eleman: ");
    scanf("%d",&n);

    int dizi[n];

    srand(time(NULL));

    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }    
    printf("\n");
    sirala(dizi,0,n);
}