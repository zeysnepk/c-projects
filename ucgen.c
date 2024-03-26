#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Lutfen ucgenin kenar uzunluklarini giriniz.\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a-b>c || b-a>c || a+b<c)
    {
        printf("Gecersiz ucgen\n");
    }

    else if(b-c>a || c-b>a || c+b<a)
    {
        printf("Gecersiz\n");
    }

    else if(c-a>b || a-c>b || a+c<b)
    {
        printf("Gecersiz\n");
    }
    else
    {
        printf("Girilen degerler ucgen olusturur\n");

        if(a!=b && a!=c && c!=b)
        {
            printf("Cesitkenar ucgen\n");
        }
        else if((a==b && b==c))
        {
            printf("esitkenar ucgen\n");
        }
        else
        {
            printf("ikizkenar ucgen\n");
        }
    }
}