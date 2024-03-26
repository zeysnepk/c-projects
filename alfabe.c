#include<stdio.h>

int main()
{
    char x,sira;

    printf("Lutfen bir harf giriniz: ");
    scanf("%c",&x);

    if(x>='A' && x<='Z')
    {
        sira=x-'A'+1;
    }
    else
    {
        sira=x-'a'+1;
    }

    printf("%c harfi %d. siradadir\n",x,sira);
}