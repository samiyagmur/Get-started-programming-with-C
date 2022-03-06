#include<stdio.h>


int main(){


int i;
int asal;
int toplam;
int toplam1=0;


printf("kaca kadar olan asal sayilari toplamak istersiniz: ");
scanf("%d",&toplam);

for(asal=0;asal<toplam;asal++)
{
        int flag=0;                                                   //toplam=8
        for (i=1;i<=asal;i++){                                         // asal=0,1,2,3,4,5,6,7
                                                                      // i=
            if((asal%i)==0){   

                flag=1;
                break;
            }


        }

        if(flag=0){
            toplam1=asal+toplam1;
            printf("asal sayilarin toplami: %d",toplam1);          
        }
  
    
} 

printf("asal sayilarin toplami: %d",toplam1);
    

  





}