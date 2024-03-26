#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void karakter_boy(char *cumle)
{
    int a=0,i;
    for(i=0;cumle[i];i++){a++;}
    printf("Karakter dizimizin boyu %d\n",a);
}

void ortak_harf(char *kelime1, char *kelime2)
{
    int i,j;
    int a=0;
    for(i=0;kelime1[i];i++)
    {
        for(j=0;kelime2[j];j++)
        {
                if(kelime1[i]==kelime2[j])
                {
                    a++;
                }
        }
    }
    printf("%s ve %s %d ortak harfe sahiptir\n",kelime1,kelime2,a);
    

}

int main()
{
    char cumle[100];
    int i;
    printf("Lutfen bir kelime veya cumle giriniz:\n");
    for(i=0;cumle[i-1]!='\n';i++){scanf("%c",&cumle[i]);}
    cumle[i-1]='\0';
    karakter_boy(&cumle);
    char kelime1[100],kelime2[100];
    printf("Lutfen yeni bir kelime veya cumle giriniz:\n");
    scanf("%s%s",kelime1,kelime2);
    ortak_harf(kelime1,kelime2);


    
}