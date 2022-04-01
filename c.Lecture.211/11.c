#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
/*    //üçbasamaklı bir birinden farklı sayıların toplamı.1. yöntem.
    char x[3];
    int j;
    int toplam1=0;
    
    

    for (j = 100; j <= 999; j++)
    {

        itoa(j,x,10);//bu komut decimal olarak int i değişkenini char yapar.
        
        
        
        if(x[0]!=x[1] && x[0]!=x[2] && x[1]!=x[2]){

            int j=atoi(x);
                       
            toplam1=j+toplam1;
        }
        
        
    }
    
printf("%d ",toplam1);
*/
//üçbasamaklı bir birinden farklı sayıların toplamı.2. yöntem.
/*
int i;
int a,b,c;
int toplam=0;

for (i = 100; i <=999; i++)
{
    a=i/100;
    b=(i/10)%10;
    c=i%10;

    if((a!=b) && (a!=c) && (c!=b))
    {


        toplam=i+toplam;




    }

}
printf("Birbirinden farkli sayilarin toplami: %d",toplam);

*/

}