#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    char a[]="zeynep";
    int b=5;
    float c=43.76;
    double d=736.03883;

    char *p;
    p=a;
    int *po;
    po=&b;
    float *poi;
    poi=&c;
    double *poin;
    poin=&d;

    printf("%d  %c\n",p,*p);
    printf("%d  %d\n",po,*po);
    printf("%d  %f\n",poi,*poi);
    printf("%d  %lf\n",poin,*poin);
}