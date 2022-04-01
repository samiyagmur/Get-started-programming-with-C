#include<stdio.h>
/*
int fact(int);
int main(){

    printf("Bir sayi giriniz:");

    int x;
    scanf("%d",&x);

    printf("faktoriyel:%d",fact(x));
    
}

int fact(int x){

    int sonuc=1;
        for(int i=1;i<=x;i++){


            sonuc*=i;
        }

    return sonuc;
*/



int kare(int);
int main(){
int x;

printf("NxN  karenizi giriniz:");
scanf("%d",&x);           
printf("sonuc: %d 'dir",kare(x));
                           

}                                       
int kare(int n)
{
    
    if(n==0)
        {
            return 0;
        }
        
    
    return (n*n)+kare(n-1);

}








