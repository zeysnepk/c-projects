#include<stdio.h>


int main()
{
    int lim,i=0,a=1;

    printf("Bir limit giriniz: ");
    scanf("%d",&lim);

    while(i<=lim)
    {
        if(i%17 == 0)
        {
            printf("%4d",i);
            a++;
        }
        i++;
        
        if(a>10)
        {
            printf("\n");
            a=1;
        }
    }

}
