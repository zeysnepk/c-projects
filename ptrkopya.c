#include<stdio.h>
#include<math.h>
#include<stdlib.h>



int main()
{
    int n;
    
    int i;
    int *ptr;
    
    printf("eleman sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[n];
    int dizi2[n];
    printf("Lutfen dizi elemanlarini giriniz:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<n;i++)
    {
        ptr=&dizi[i];
        dizi2[i]=*ptr;
        ptr++;
    }
    
    printf("ilk dizi:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\nikinci dizi:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",dizi2[i]);
    }

}