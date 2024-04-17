#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void dizi_olustur();
void dizi_sirala(int *, int*);
void dizi_buyuk(int *,int);


int main()
{
    dizi_olustur();
}

void dizi_olustur()
{
    int N,i;
    int *tamsayi;
    int n;
    

    printf("Lutfen N sayisini giriniz: ");
    scanf("%d",&N);

    tamsayi=(int*)malloc(N*sizeof(int));

    srand(time(0));

    printf("\nUretilen Sayiar:\n");
    for(i=0;i<N;i++)
    {
        *(tamsayi+i)=rand()%100;
        printf("%d ",*(tamsayi+i));
    }

    n=N;
    dizi_sirala(tamsayi,&N);

    printf("\nKucukten Buyuge Siralanmis dizi\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(tamsayi+i));
    }

    dizi_buyuk(tamsayi,n);

    free(tamsayi);
}

void dizi_sirala(int *tamsayi, int *n)
{
    int gecici,i;

    while(*n>=0)
    {
        for(i=1;i<=*n-1;i++)
        {
            if(*(tamsayi+*n-i) < *(tamsayi+*n-i-1))
            {
                gecici=*(tamsayi+*n-i);
                *(tamsayi+*n-i)=*(tamsayi+*n-i-1);
                *(tamsayi+*n-i-1)=gecici;
            }
        }

        (*n)--;
        dizi_sirala(tamsayi,n);
    }

}

void dizi_buyuk(int *tamsayi,int N)
{
    int i,max=INT16_MIN;
    for(i=0;i<N;i++)
    {
        if(*(tamsayi+i) > max)
        {
            max=*(tamsayi+i);
        }
    }

    printf("\nEn buyuk sayi: %d\n",max);
}