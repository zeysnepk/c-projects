#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int *ptr, *ptr1;
    int n=5;
    int i;

    ptr=(int *)malloc(n*sizeof(int));
    ptr1=(int *)calloc(n,sizeof(int));

    if(ptr == NULL || ptr1 == NULL)
    {
        printf("Bellekte yer ayirma islemi basarisiz\n");
        exit(0);
    }
    else
    {
       printf("Malloc kullanarak basarili bir sekilde ayirma islemi yapildi\n");
       free(ptr);

       for(i=0;i<n;i++)
       {
        ptr[i]=i+1;
        printf("%d ",ptr[i]);
       }
       printf("\nMalloc icin ayirilan yer serbest birakildi\n\n");

       printf("Calloc kullanarak basarili bir sekilde ayirma islemi yapildi\n");
       for(i=0;i<n;i++)
       {
        ptr1[i]=i+1;
        printf("%d ",ptr1[i]);
       }
       free(ptr1);
       printf("\nCalloc icin ayirilan yer serbest birakildi\n"); 
    }
}