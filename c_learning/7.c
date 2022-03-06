//aray
#include<stdio.h>


int main(){


/*//dizi içene scanf ile değer girme

int i=0;
int a [5];
    while(i<5)
    {
        
        printf("%d.sayiyi giriniz:",i);   
        scanf("%d",&a[i]);
        i++;
    
    }
        
printf("%d",a[3]);
*/
/*
int i=0;
int a []={3,2,5,6,9};
int gecici;

while (i<2)
{   
    gecici=a[i];
    a[i]=a[4-i];
    a[4-i]=gecici;

    i++;
}




     
printf("%d ",a[0]);
printf("%d ",a[1]);
printf("%d ",a[2]);
printf("%d ",a[3]);
printf("%d ",a[4]);


*/
/*

int i=0;
int fib=1;
int a[20];
a[i]=fib;
a[i+1]=a[i];
for(;i<20;i++)
{
        
    a[i+2]=a[i]+a[i+1];

}


for (int i = 0; i < 20; i++)
{
    printf("%d ",a[i]);
}

*/
int i;
int not[10];
int toplam=0;
int buyuk=0;
int kucuk=100;
int note;
int flag=0;


for(i=0;i<10;i++)
{   
    i++;
    printf("%d.ogrencinin notunu giriniz:",i);
    i--;
    scanf("%d",&not[i]);
}
for(i=0;i<10;i++)
{
    if ((not[i])>buyuk)
    {
        buyuk=not[i];
        
    }
    if((not[i])<kucuk)
    {
        kucuk=not[i];
    }
    toplam=not[i]+toplam;
}
printf("%d\n",toplam/i);
printf("en kucuk sayi:%d\n",kucuk);
printf("en buyuk sayi:%d\n",buyuk);

printf("Bir not giriniz:");
scanf("%d",&note);

for(i=0;i<10;i++)
{
    if((not[i])==note)
    {   
        flag=1;
        break;
    }
       
    
}
if (flag==1)
{   
    printf("Daha once bu sayiyi girdiniz \n");

}
else
{
    printf("Daha once bu sayiyi girmediniz: ");
}





} 