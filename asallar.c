#include <stdio.h>
int main()
{
    int n1,n2,i,ilk,son,j,count=0;

    printf("iki sayi giriniz:\n");
    scanf("%d%d",&n1,&n2);

    if(n1>n2)
    {
        ilk=n2;
        son=n1;
    }
    else
    {
        ilk=n1;
        son=n2;
    }
    printf("%d ve %d arasindaki asal sayilar:\n",ilk,son);
    for(i=ilk;i<=son;i++)
    {
        if(i<2){
            count = 1;
        }
        else{
            count=0;
            for(j=2;j<=i-1;j++){
                if(i%j == 0){
                    count=1;
                    break;
                }
            }
        }
        if(count==0){
            printf("%d\n", i);
        }
    }
}
