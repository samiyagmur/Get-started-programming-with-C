#include<stdio.h>
#include<stdlib.h>
#include<string.h>//kopyalama


int main(){
/*
   int esitmi=1;
   int i;

   for(i=0;p[i]!='\0';i++){

       if(p[i]!=q[i]){

                esitmi=0;
                break;
       }
   }

    if(esitmi=1&&q[i]=='\0'){
        printf("esitler");
    }
    else{
        printf("esit degiller");
    }
*/
    /*
    char isim[20];///Her string bir dizidir.
    char *soyisim;///Her bir pointerda diziyi oluşturabilir.
    soyisim=(char *) malloc(sizeof(char)*20);//bu lomutla ramde 20 karakterlik bir yer oluşturdul.
    printf("isminizi giriniz:");
    scanf("%s",isim);
    printf("soyisminizi giriniz:");
    scanf("%s",soyisim);
    printf("tanistigimiza memnun oldum %s %s",isim,soyisim);
    printf("ucuncu karakter %c %c",isim[3],soyisim[3]);//ekrana isminizin ve soy isminizin 3 karakteriniz basacak.
                                                        //Bu yolla dizinin içerisindeki karakterlere ulaşabiliriz.

*/
    char ilks[20]="deneme mesaji";
    char ikincisi[20]="ikinci mesaj";
    char *ilk=ilks;
    char *iki=ikincisi;
    printf("%s %s",ilk,iki);
    //ilk=iki;
    strcpy(ilk,iki);//kopyalama işlemi yapar
/*    char c=iki[0];
    int i;
    while(c!='\0'){
        ilk[i]=iki[i];
        i++;
        c=iki[i];
    }
    */
    printf("%s %s",ilk,iki);
    ilk[3]='x';
    printf("%s %s\n",ilk,iki);
    printf("dizgi boyutu : %d",strlen(ilk));//bu komut dizinin boyutunu gösterir.


}