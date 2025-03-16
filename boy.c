#include<stdio.h>
#include<stdlib.h>

/*
    0 dan büyük öğrenci numaraları için 
    150 cm boyuna en yakın boy ve noyu basar.
*/

#define BOY     150

int main()
{
    int no=0,boy,yakin=__UINT8_MAX__,minboy=0,minno=0;
    while(1)
    {
        printf("\nOgrenci no: ");
        scanf("%d",&no);

        if(no<=0) break;
        else{
            printf("Ogrenci boy: ");
            scanf("%d",&boy);
            if(abs(boy-BOY) < yakin){
                yakin = abs(boy-BOY);
                minboy=boy;
                minno=no;
            }
        }
    }    
    printf("%d numarali ogrenci %d cm boyuyla 150 cm ye en yakindir",minno,minboy);
}
