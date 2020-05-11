#include <stdio.h>
const int LIMITE_MAX_MALDADES = 99;
const int LIMITE_MIN_MALDADES = 0;

//Pre: Obtener un valor entero
//Post: Asignarele un valor 
void cantidad_de_maldades(int* maldades_ult_mes){
	printf("Cuantas maldades hiciste en el ultimo mes? Ingresa un numero entre 0 y 99\n");
	printf("NOTA: Si tu elemento es Tierra o Agua ingrese un numero entre 0 y 49. Si su elemento es Fuego o Aire ingrese un numero entre 50 y 99\n");
	scanf("%i", maldades_ult_mes);
	while((*maldades_ult_mes < 0) || (*maldades_ult_mes > LIMITE_DE_MALDADES)){
		printf("Valor ingresado no valido. Por favor ingrese un valor correcto.\n");
		scanf("%i", maldades_ult_mes);
	}
	return;
}

int main(){
	int maldades_ult_mes;
	cantidad_de_maldades( &maldades_ult_mes);
	return 0;
}
//gcc maldades.c -Wall -Werror -Wconversion -std=c99 -o maldades