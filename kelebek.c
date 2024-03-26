#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void sekilciz(int kenar, char cha)
{
    int i,j;
    for(i=0;i<kenar/2;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=kenar-1;j>i*2;j--)
        {
            printf("%c",cha);
        }
        printf("\n");
    }
    for(i=0;i<kenar/2;i++)
    {
        for(j=kenar/2-1;j>i;j--)
        {
            printf(" ");
        }
        for(j=0;j<=i*2;j++)
        {
            printf("%c",cha);
        }
        printf("\n");
    }
}

int main()
{
   int satir;
   char karakter;
   printf("Kac satir olsun: ");
   scanf("%d",&satir);
   printf("Hangi karakter basilsin: ");
   scanf(" %c",&karakter);
   printf("\n");
   sekilciz(satir,karakter); 
}