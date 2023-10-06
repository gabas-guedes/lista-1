#include<stdio.h>

int main(){

    int numerodedias;
    int resto;
       
    scanf("%d", &numerodedias);
    
    printf("%d ano(s)\n", (numerodedias/365));
    resto = numerodedias % 365;
   
    printf("%d mes(es)\n", (resto/30));
    resto = resto % 30;
    
    printf("%d dia(s)\n", (resto/1));
    resto = resto % 1;



return 0;
}