#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void bolmeislemi(int bolunen, int bolen)
{
    int bolum,kalan;
    bolum=bolunen/bolen;
    kalan=bolunen%bolen;
    printf("Bolum = %d\n",bolum);
    printf("Kalan = %d\n",kalan);
}


int main()
{
    int x,y;
    printf("Bolunen ve bolen degerlerini giriniz:\n");
    scanf("%d%d",&x,&y);
    printf("\n");
    bolmeislemi(x,y);
}