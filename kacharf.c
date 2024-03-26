#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    char cumle[100];
    int harf[100];
    printf("Lutfen bir cumle giriniz:\n");
    gets(cumle);
    int i,b=0;
    for(i=0;cumle[i];i++)
    {
        harf[cumle[i]-'a']++;
        b++;
    }
    printf("\n");
    for(i=0;i<26;i++)
    {
        if(cumle[i]==' ')
        {
            
            continue;
        }

        printf("%c harfi %d kere basilmistir\n",'a'+i,harf[i]);
    }
}