#include<stdio.h>

int main(){

int s, horas, minutos, segundos, resto;
    scanf("%d", &s);
    

horas = s / 3600;
resto = s % 3600;

minutos = resto / 60;
resto = resto % 60;

segundos = resto / 1;
resto = resto % 1;
printf("%d:%d:%d\n", horas, minutos, segundos);

return 0;
}