#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void yazdir(int matris2[])
{
    int i,j;
    for(i=0;i<6;i++)
    {
        if(i%2==0 && i!=0)
        {
            printf("\n");
        }
        printf("%d ",matris2[i]);
        
    }
}

void max_deger(int matris3[],int *max)
{
    int i;
    *max=matris3[0];
    for(i=0;i<6;i++)
    {
        if(matris3[i]>*max)
        {
            *max=matris3[i];
        }
    }
}

void min_deger(int matris4[],int *min)
{
    int i;
    *min=matris4[0];
    for(i=0;i<6;i++)
    {
        if(matris4[i]<*min)
        {
            *min=matris4[i];
        }
    }
}

void top_deger(int matris5[],int *top)
{
    int i;
    *top=0;
    for(i=0;i<6;i++)
    {
        *top=*top+matris5[i];
    }
}

void cagir(int matris1[])
{
    yazdir(matris1);
    int max,min,top;
    max_deger(matris1,&max);
    min_deger(matris1,&min);
    top_deger(matris1,&top);
    printf("\n");
    printf("En buyuk deger = %d\n",max);
    printf("En kucuk deger = %d\n",min);
    printf("Degerler toplami = %d\n",top);
}

int main()
{
    int matris[3];
    int i,j;
    printf("Lutfen 6 adet sayi giriniz:\n");
    
    for(i=0;i<6;i++)
    {
        scanf("%d",&matris[i]);
    }
    
    cagir(matris);


}