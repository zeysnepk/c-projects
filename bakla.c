#include<stdio.h>
#include<stdlib.h>


void ccc(int satir)
{
    int i,j;
    for(i=1;i<=satir;i++)
    {
        for(j=satir;j>i;j--)
        {
            printf(" ");
        }
        for(j=1;j<i*2;j++)
        {
            printf("c");
        }
        printf("\n");
    }
}

void arti(int satir)
{
    int i,j;
    for(i=1;i<satir;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=(satir-1)*2;j>=i*2;j--)
        {
            printf("+");
        }
        printf("\n");
    }
}






int main()
{
    int s;
    printf("Satir sayisini giriniz: ");
    scanf("%d",&s);
    ccc(s);
    arti(s);
}