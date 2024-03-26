#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float seri_us(float a)
{
    int i,j;
    float top=1,son=0;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<3;j++)
        {
            top=top*i;
        }
        son=son+top;
        top=1;
    }
    return son;
}


int main()
{
    int x;
    printf("Lutfen bir deger giriniz: ");
    scanf("%d",&x);
    printf("Sonuc = %.2f\n",seri_us(x));
}