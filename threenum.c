#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int findmax(int, int, int);
void orderdes(int ,int ,int);
int fac(int);
int pwx(int, int);


int main()
{
    int x,y,z;
    int pw,N;
    int i;
    double A=0.0;
    printf("Please enter 3 numbers:\n");
    scanf("%d%d%d",&x,&y,&z);

    printf("\nMax Number = %d\n",findmax(x,y,z));

    orderdes(x,y,z);

    printf("\nEnter the X: ");
    scanf("%d",&pw);
    printf("Enter the n: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        A+=(double)((double)pwx(pw,i)/(double)fac(i));
    }
    printf("\nA = %lf\n",A);

}

int findmax(int a, int b, int c)
{
    int max=a;

    if(b > max)
    {
        max=b;
    }
    if(c > max)
    {
        max=c;
    }

    return max;
}

void orderdes(int a, int b, int c)
{
    int max,mid,min;
    if(a>b && a>c)
    {
        max=a;
        if(b>c)
        {
            mid=b;
            min=c;
        }
        else
        {
            mid=c;
            min=b;
        }
    }
    else if(b>c)
    {
        max=b;
        if(a>c)
        {
            mid=a;
            min=c;
        }
        else
        {
            mid=c;
            min=a;
        }
    }
    else
    {
        max=c;
        if(a>b)
        {
            mid=a;
            min=b;
        }
        else
        {
            mid=b;
            min=a;
        }
    }
    printf("\nOrdered Numbers: %d > %d > %d\n",max,mid,min);
}

int fac(int n)
{
    int i,f=1;
    if(n<0)
    {return 0;}
    if(n==0)
    {return 1;}
    else
    {
        for(i=1;i<=n;i++)
        {
            f*=i;
        }return f;
    }
}
 
int pwx(int x, int n)
{
    int i,pw=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            pw*=x;
        }
        return pw;
    }
}
