#include<stdio.h>

int main()
{
    int i,j,num;
    char d='A';
    printf("Enter num: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",d);
            if(d=='Z')
            {
                d='A'-1;
            }
            d=d+1;
            
        }
        printf("\n");
    }
}