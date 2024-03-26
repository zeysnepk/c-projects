#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int dizi[10][10];
    int i,j;
    printf("   I");
    for(i=1;i<=10;i++)
    {
        printf("%4d",i);
    }
    printf("\n-----------------------------------------------\n");
    for(i=1;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(j==0)
            {
                printf("%4d",i);
            }
            else
            {
                printf("%4d",i*j);
            }
        }
        printf("\n");
    }
}