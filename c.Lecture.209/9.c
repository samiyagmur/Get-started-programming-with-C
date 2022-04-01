#include<stdio.h>
#include<stdlib.h>
/*
typedef enum{
    bay,//0
    bayan//1
}cinsiyet;

typedef enum{
    pazartesi,
    sali,
    carsamba,
    persembe,
    cuma,
    cumartesi,
    pazar


}gunler;

typedef struct
{
    int yas;
    char * isim;
    cinsiyet c;
    gunler tatilgunu;
}insan;

int main()
{
    int a;
    insan ali;
    ali.yas=30;
    ali.c=bay;
    ali.tatilgunu=persembe;
    printf("alinin yasi : %d\n",ali.yas);
    printf("alinin cinsiyeti : %u\n",ali.c);
    printf("alinin tatil gunu : %u\n",ali.tatilgunu);
    

}
*/
/*
typedef enum{
    bay,//0
    bayan//1
}cinsiyet;

typedef struct
{
    int yas;
    char * isim;
    cinsiyet c;
   
}insan;
int emeklimi(insan *birey){
    if(birey->c == bay && birey->yas > 55)
                return 1;
    if(birey->c == bayan && birey->yas > 55)
                return 1;   
    return 0;         
}   

int main()
{
    int a;
    insan ali;
    insan *veli;
    veli=(insan*) malloc(sizeof(insan));
    veli-> yas=60;
    veli-> c=bay;
    ali.yas=30;
    ali.c=bay;
    printf("alinin yasi : %d\n",ali.yas);
    printf("alinin cinsiyeti : %u\n",ali.c);
    printf("velinin yasi : %d\n",veli-> yas);
    printf("ali emeklimi:  %d\n",emeklimi(&ali));
    printf("veli emeklimi:  %d\n",emeklimi(veli));
    
}*/