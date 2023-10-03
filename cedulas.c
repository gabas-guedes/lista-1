#include<stdio.h>

int main(){

    int n;
    int resto;

    scanf("%d", &n);
     printf("%d\n", n);
    
    
     printf("%d nota(s) de R$ 100,00\n", (n/100));
    resto = n % 100;
    
    printf("%d nota(s) de R$ 50,00\n", (resto /50));
    resto = n % 50;
    
    printf("%d nota(s) de R$ 20,00\n", (resto /20));
    resto = n % 20;
    
    printf("%d nota(s) de R$ 10,00\n", (resto /10));
    resto = n % 10;
   
    printf("%d nota(s) de R$ 5,00\n", (resto /5));
    resto = n % 5;
    
    printf("%d nota(s) de R$ 2,00\n", (resto /2));
    resto = n % 2;
    
    printf("%d nota(s) de R$ 1,00\n", (resto /1));
    resto = n % 1;

    return 0;
}