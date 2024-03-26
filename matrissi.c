#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void yazdir(int matris[3][2])
{
    int i,j;
    printf("Lutfen 3 2 boyutundaki matrisin elemanlarini giriniz:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",matris[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int max,min,top;
    int matris[3][2];
    yazdir(matris);
}