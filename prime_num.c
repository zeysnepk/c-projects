#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void prime()
{
    int n,i;
    printf("Enter A Number: ");
    scanf("%d",&n);
    int loop=1;

    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            loop=0;
        }
    }

    if(loop == 1)
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Number is not prime\n");
    }

}

int main()
{
    prime();
}