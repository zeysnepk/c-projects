#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void donustur(float x, char b)
{
    
    if(b == 'C' || b == 'c')
    {
        printf("%f f = %.2f C\n",x,(0.5555)*(x-32));
    }
    else if(b == 'F' || b == 'f')
    {
        printf("%f C = %.2f f\n",x,(1.8*x)+32);
    }
    else
    {
        printf("Geecersiz birim\n");
    }
}

int main()
{
    float deger;
    char birim;
    printf("Lutfen derece giriniz: ");
    scanf("%f",&deger);
    printf("Cevirmek istediginiz birimi seciniz(F/C): ");
    scanf(" %c",&birim);
    donustur(deger,birim);

}