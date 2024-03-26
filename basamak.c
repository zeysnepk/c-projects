#include<stdio.h>
#include<math.h>

int main()
{
    int num,rennum,rnum,a;

    printf("Bir sayi giriniz: ");
    scanf("%d",&num);

    rnum=num;
    a=0;

    while(rnum>0)
    {
        rnum=rnum/10;
        a++;
    }

    while(num>0)
    {
        rennum=num/pow(10,a-1);
        num=num%100;
        printf("%d\n",rennum);
        a--;
    }

    
}