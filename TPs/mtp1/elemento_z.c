#include <stdio.h>
const char ELEMENTO_FUEGO = 'F';
const char ELEMENTO_TIERRA = 'T';
const char ELEMENTO_AIRE = 'A';
const char ELEMENTO_AGUA = 'W'; 
//Pre: ingreasar un tipo de dato entero >0 y <=12
/*Post: Obtener una palabra que sea el elemento 
del zodiaco*/
void averiguar_elemento(int* signo_zodiaco, char* elemento){
    printf("Ingresa el numero de tu signo:\n");
    printf("Aries:1\nTauro:2\nGeminis:3\nCancer:4\nLeo:5\nVirgo:6\n");
    printf("Libra:7\nEscorpio:8\nSagitario:9\nCapricornio:10\nAcuario:11\nPiscis:12\n");
    scanf("%i", signo_zodiaco);
    if(*signo_zodiaco == 1|| *signo_zodiaco == 5|| *signo_zodiaco == 9){
        (*elemento) = ELEMENTO_FUEGO;
        printf("Tu elemento es Fuego\n");
    }else if(*signo_zodiaco == 2|| *signo_zodiaco == 6|| *signo_zodiaco == 10){
        (*elemento) = ELEMENTO_TIERRA;
        printf("Tu elemento es Tierra\n");
    }else if(*signo_zodiaco == 3|| *signo_zodiaco == 7|| *signo_zodiaco == 11){
        (*elemento) = ELEMENTO_AIRE;
        printf("Tu elemento es Aire\n");
    }else if(*signo_zodiaco == 4|| *signo_zodiaco == 8|| *signo_zodiaco == 12){
        (*elemento) = ELEMENTO_AGUA;
        printf("Tu elemento es Agua\n");
    }else{
        printf("Valor incorrecto. Ingrese un valor correcto\n");
        averiguar_elemento( signo_zodiaco, elemento);
    }
}



int main(){
    int signo_zodiaco;
    char elemento;
    averiguar_elemento(&signo_zodiaco, &elemento);
    return 0;
}
//gcc elemento_z.c -Wall -Werror -Wconversion -std=c99 -o elemento