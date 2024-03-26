#include<stdio.h>
int main()
{
    int i,j,num,count=0,a,b;

    printf("Bir sayi giriniz:\n");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                count++;
            }
            if(i==2)
            {
                count=0;
            }
        }
        if(count==0 && num%i == 0)
        {
            a=i;
            b=num/i;
            printf("%d * %d = %d\n",a,b,num);
        }
    }
    
}