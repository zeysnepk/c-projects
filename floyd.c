#include<stdio.h>

void floyd(int n)
{
    int i,j,a=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            a++;
            printf("%-2d ",a);
        }
        printf("\n\n");
    }
}

int main()
{
    int s;
    printf("bir sayi giriniz: ");
    scanf("%d",&s);
    floyd(s);
}