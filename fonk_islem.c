#include<stdio.h>

float fonk_islem(int s1, int s2, char op)
{
    float s;
    switch(op)
    {
        case '+':  s=(float)s1+s2; break;
        case '-':  s=(float)s1-s2; break;
        case '*':  s=(float)s1*s2; break;
        case '/':  s=(float)s1/s2; break;
        default: printf("gecerseiz islem");
    }
    return s;
}

int main()
{
    int n1,n2;
    char op;

    printf("Lutfen iki sayi giriniz:\n");
    scanf("%d%d",&n1,&n2);

    printf("Hangi islemi yapmak istiyorsunuz: ");
    scanf(" %c",&op);

    printf("Islemin Sonucu = %.2f\n",fonk_islem(n1,n2,op));
}