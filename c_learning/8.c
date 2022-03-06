#include<stdio.h>
#include <stdlib.h>
/*
int g(int);
int f(int *);
*/
int main(){

    /*///pointer denetimi///
    int a=10;
    int *p;
    p=&a;

    printf("%d\n",*p);//p'nin gösterdiği yeri basar
    printf("%d\n",p);//p'nin değerini yani,p'nin gösterdiği yerin adresini basar
    printf("%d\n",a);//a'nin değerini basar
    printf("%d\n",&a);//a'nın adresini basar
    printf("%d\n",&p);//p'nin adresini basar
    */
   /*////Öğretmenin vereceği kişi sayısına göre öğrencilerin not ortalamasının alınması//
   int sayi,i,puan,toplam=0;
   printf("kac adet ogrencinin notlarini girmek istersiniz:");
   scanf("%d",&sayi);

   int *p=(int*) malloc(sizeof(int)*sayi);


   for(i=0;i<sayi;i++) 
   {    i++;
      printf("%d.ogrencilerin puanlarini giriniz:",i);
      i--;
      scanf("%d",&puan);

      p[i]=puan;
      
   }
    for(i=0;i<sayi;i++) 
   {
       toplam=p[i]+toplam;
       
   }
       printf("sinav ortalamsi:%d",toplam/sayi);
   
   */
/*
    int *p;
    int a=10;
    p=&a;
    printf("%d",*p);
    *p=20;
    printf("\n %d",a);
    int *q=(int *)malloc(sizeof(int)*a);
    q[3]=70;
    printf("\n%d",q[3]);
    f(&a);
    printf("\n%d",a);
    g(a);
    printf("\n%d",a);

*/



}
/*
int g(int a)//call by value//burda a değişkenindeki yapılan değişiklik ana fonksiyonunu etkilemiyecek
{
    a=90;
}
int f(int *a)//call by reference
{
    *a=80;//fakat buradaki değişiklik ana fonksiyondaki a değişkeninde değişmesini sağlayacak
}           
*/