#include<stdio.h>
#define DK 0.08
#define BAS 0.25

int main()
{
    float d,ucret;

    printf("Lutfen dakikanizi giriniz: ");
    scanf("%f",&d);

    if(d<=3)
    {
        ucret=BAS;
    }

    else
    {
        ucret=(d-3)*DK+BAS;
    }

    printf("Toplam ucret = %.2f\n",ucret);
}