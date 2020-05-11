#include <stdio.h>

void calcular_pasos(float* distancia, int* pasos){
  if(*distancia < 1){
    return ;
  }
  if(*distancia > 1){
    *pasos = *pasos + 1;
    *distancia = *distancia/2;
    calcular_pasos(distancia, pasos);
    printf("%i\n", *pasos);
  }
}



int main(){
  float distancia;
  int pasos = 0;
  printf("A cuantos metros estan?\n");
  scanf("%f", &distancia);
  calcular_pasos(&distancia, &pasos);

  return 0;
}


#include <stdio.h>

void contar_ascendentemente(int numero, int contador){
  if(contador > numero){
    return;
  }
  contar_ascendentemente(numero, contador + 1);
  if(contador %2 == 0){
  printf("%i\n", contador);
  }
}

void contar_descendentemente(int numero, int contador){
  if(contador > numero){
    return;
  }
  contar_descendentemente(numero, contador + 1);
  if(contador %2 != 0){
  printf("%i\n", contador);
  }
}

void contar(int numero){
  int contador = 0;
  contar_ascendentemente(numero, contador);
  contar_descendentemente(numero, contador);
}


int main(){
  int numero;
  printf("Cual es el numero?\n");
  scanf("%i", &numero);
  contar(numero);

  return 0;
}