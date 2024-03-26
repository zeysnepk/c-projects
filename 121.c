#include<stdio.h>
int main()
{
int i,j,k,m;
for (i = 1; i <=3; i++) 
{
for(m=3;m>i;m--) 
{ printf(" "); 
} 
for (j=1;j<=i;j++) 
{ 
printf("%d",j); 
} 
for(k=i-1;k>=1;k--) 
{ 
    printf("%d",k); 
} 
printf("\n");
}
}