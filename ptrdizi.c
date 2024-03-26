#include<stdio.h>
#include<math.h>
#include<stdlib.h>



int main()
{
    int n;
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&n);
    int a=n;
    int dizi[n];
    int *ptr;
    ptr=dizi;
    printf("Elemanlari giriniz:\n");
    
    
    for(ptr;n>0;ptr++)
    {
        scanf("%d",ptr);
        n--;
    }
    ptr=dizi;
    for(ptr;a>0;ptr++)
    {
        printf("%d ",*ptr);
        a--;
    }

}