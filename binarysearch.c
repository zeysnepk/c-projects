#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*
    Girilen sayıları önce küçükten büyüğe sıralar,
    sonra aranılan sayıyı binary search yöntemi ile 
    bulup sırasını basar.
*/


void binarysearch(int*,int,int,int*);

int main()
{
    int x,n,i,j,gecici;

    printf("Kac eleman?: ");
    scanf("%d",&n);

    int dizi[n];

    printf("\nDizi elemanlarini giriniz:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(dizi[i] > dizi[j])
            {
                gecici=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici;
            }
        }
    }

    printf("Dizinin siralanmis hali\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }


    printf("\nAradiginiz sayi: ");
    scanf("%d",&x);

    int mid=n/2;


    binarysearch(dizi,x,n,&mid);

    if(mid == 0)
    {
        printf("Bulunamamistir\n");
    }
    else
    {
        printf("%d degeri %d. siradadir\n",x,mid);
    }

}

void binarysearch(int dizi[], int x, int n, int *mid)
{
        if(x == dizi[*mid])
        {
            *mid=*mid+1;
        }
        else if(x < dizi[*mid] && *mid>0)
        {
            *mid=*mid/2;
            binarysearch(dizi,x,n,mid);
        }
        else if(x > dizi[*mid] && *mid<n-1)
        {
            *mid=n-*mid/2;
            binarysearch(dizi,x,n,mid);
        }
        else
        {
            *mid=0;
        }
}
