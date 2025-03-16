#include <stdio.h>
int main()
{
    int i, num, count;
   printf("1 - 1000 Arasi Asal Sayilar:\n");
   for(num = 1;num<=1000;num++){
      count = 0;
      for(i=2;i<=5;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}
