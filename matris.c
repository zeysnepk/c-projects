#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int i,j;
    int sutun;
    printf("Kac sutun girmek istiyorsunuz: ");
    scanf("%d",&sutun);
    int c[sutun][sutun];
    printf("P   ");
    for(i=0;i<sutun;i++)
    {
        printf("%5d",i);
    }
    printf("\nn\n----");
    for(i=0;i<sutun;i++)
    {
        printf("------");
    }
    printf("\n");
    
    for(i=0;i<sutun;i++)
    {
        printf("%2d --",i);
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==j)
            {
                c[i][j]=1;
            }
            else
            {
                c[i][j]=c[i-1][j]+c[i-1][j-1];
            }
            printf("%5d",c[i][j]);

            
        }
        printf("\n");
        
    }

}