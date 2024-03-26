#include <stdio.h>
int main()
{
    int n1,n2,i,ilk,son,j,count;

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
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        if(i==2)
            {
                count=0;
            }
    
        if(count==0 && ilk>1)
        {
            
            printf("%d\n",i);
        }

        count=0;
    }

    

    
}