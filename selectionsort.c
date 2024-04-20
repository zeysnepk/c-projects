#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>


int main()
{
    int N,i,j,gecici,konum;
    printf("Kac sayi?: ");
    scanf("%d",&N);

    int dizi[N];

    printf("\nDizi Elemanlari\n");

    for(i=0;i<N;i++)
    {
        scanf("%d",&dizi[i]);
    }

    for(i=0;i<N;i++)
    {
        printf("%d ",dizi[i]);
    }

    for(i=0;i<N-1;i++)
    {
        konum=i;
        for(j=i+1;j<N;j++)
        {
            if(dizi[i] > dizi[j])
            {
                konum=j;
                gecici=dizi[i];
                dizi[i]=dizi[konum];
                dizi[konum]=gecici;
            }
        }
        
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",dizi[i]);
    }
   


}