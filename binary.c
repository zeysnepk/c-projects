#include<stdio.h>
/*
    Girilen binary numarasının decimal sayısını basar
*/
int main()
{
    int binnum,decnum=0;
    int son,pw=2;
    printf("Enter A Binary Number Like '1101' :");
    scanf("%d",&binnum);
    while(binnum>0)
    {
        son=binnum%10;
        decnum=decnum+son*(pw/2);
        pw=pw*2;
        binnum=binnum/10;
    }
    printf("The Decimal Number : %d",decnum);
}
