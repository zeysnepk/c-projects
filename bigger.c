#include<stdio.h>
/*
    Girilen 3 sayının en büyüğünü basar.
*/
int main()
{
    int n1,n2,n3;
    printf("Lütfen 3 sayi giriniz:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    if(n1>n2 && n1>n3)
    {
        printf("En buyuk sayi : %d\n",n1);
    }

    if(n2>n3 && n2>n1)
    {
        printf("En buyuk sayi : %d\n",n2);
    }

    if(n3>n2)
    {
        printf("En buyuk sayi : %d\n",n3);
    }
}
