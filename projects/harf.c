#include<stdio.h>
#include<stdlib.h>



int main()
{
    char cumle[100];
    char kelime[100];
    printf("Bir kelime giriniz: ");
    scanf("%s",cumle);
    
    int i,j;
    char x,y;
    for(i=0;cumle[i];i++)
    {
        kelime[i]=cumle[i];
        printf("%c",kelime[i]);
    }
    printf("\n");
    for(i=0;cumle[i]-1;i++)
    {
        for(j=0;cumle[j];j++)
        {
            if(cumle[j]<cumle[j+1])
            {
                x=cumle[j+1];
                cumle[j+1]=cumle[j];
                cumle[j]=x;
            }
        }
    }
    for(i=0;cumle[i];i++)
    {
        printf("%c",cumle[i]);
    }

    printf("\n");
    for(i=0;kelime[i]-1;i++)
    {
        for(j=0;kelime[j];j++)
        {
            if(kelime[j]>kelime[j+1])
            {
                y=kelime[j];
                kelime[j]=kelime[j+1];
                kelime[j+1]=y;

            }
        }
    }
    for(i=0;kelime[i];i++)
    {
        printf("%c",kelime[i]);
    }
    

    
}
