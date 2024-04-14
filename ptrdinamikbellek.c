#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    // 3x4 matris
    int **m;
    int i,j;

    m=(int **)malloc(3*sizeof(int *));

    for(i=0;i<3;i++)
    {
        m[i]=(int *)malloc(4*sizeof(int));
        for(j=0;j<4;j++)
        {
            *m[i]=10*i+j+1;
            printf("%3d",*m[i]);
        }
        printf("\n");
    }
    free(*m);
}