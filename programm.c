#include<stdio.h>
void main(){
    double plate[3]; //  0        1         2        
    double *p;       //[504.12] [456.13] [865.15]


    p= &plate;
    printf("trenutna adresaa pokazivaca je %p\n", p);
    *p = 504.12;   //0000001

    p++; //p= p =1 //0000009
    printf("tenutna adresa pokazivaca je %p\n", p);
    *p= 456.13;

    p++;
    printf("trenutan adresa pokazivaca je %p\n", p);
    *p=865.15;

    //p++;
    //printf("trenutan adresa pokazivaca je %p\n", p);(ovo je u slucaju da hocemo da trayimo dalje pomemoriji )

    printf("tri plate su: %.2f, %.2f, %.2f\n ", 
    plate[0],
    plate[1],
    plate[2]);

}