#include <stdio.h>
const char GENERO_ACCION = 'A';
const char GENERO_DRAMA = 'D';
const char GENERO_COMEDIA = 'C';
const char GENERO_TERROR = 'T';

//Pre: Obtener un caracter en Mayusculas
//Post: Si ingresa un valor equivocado, se le pide que lo vuelva a ingresar
void averiguar_genero_fav(char* genero_cine_fav){
    printf("Cual es tu genero de cine preferido de las siguientes opciones(Solo ingerse  la letra asignada):\n");
    printf("A.accion\nD.drama\nC.comedia\nT.terror\n");
    scanf("%c", genero_cine_fav);

    if(*genero_cine_fav == 'A'){
        *genero_cine_fav = GENERO_ACCION;
    }else if(*genero_cine_fav == 'D'){
        *genero_cine_fav = GENERO_DRAMA;
    }else if(*genero_cine_fav == 'C'){
        *genero_cine_fav = GENERO_COMEDIA;
    }else if(*genero_cine_fav == 'T'){
        *genero_cine_fav = GENERO_TERROR;
    }else{
        while((*genero_cine_fav == 'A') && (*genero_cine_fav == 'D') && (*genero_cine_fav == 'C') && (*genero_cine_fav == 'T')){
            printf("Valor incorrecto. Ingrese un valor correcto\n");
            scanf("%s", genero_cine_fav);
        }
    
    
    return;
}










int main(){
    char genero_cine_fav;
    averiguar_genero_fav( &genero_cine_fav);
    
    return 0;
}
//gcc genero_cine.c -Wall -Werror -Wconversion -std=c99 -o genero