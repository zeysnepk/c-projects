#include<stdio.h>


int main()
{
    int no,boy,yakin,minboy,minno;

    printf("Ogrenci no: ");
    scanf("%d",&no);

    printf("Ogrenci boy: ");
    scanf("%d",&boy);

    yakin=boy-150;



    while (no>0)
    {
        printf("\nOgrenci no: ");
        scanf("%d",&no);

        printf("Ogrenci boy: ");
        scanf("%d",&boy);

        if(boy>150 && no>0)
        {
            if(boy-150<yakin)
            minboy=boy;
            minno=no;
        }

        else if(boy<=150 && no>0)
        {
            if(150-boy<yakin)
            minboy=boy;
            minno=no;
        }

    }

    printf("%d numarali ogrenci %d cm boyuyla 150 cm ye en yakindir",minno,minboy);
    
}