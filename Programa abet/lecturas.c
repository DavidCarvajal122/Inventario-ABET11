#include <stdio.h>
#include "lecturas.h"

int leerEnteroPositivo(char* mensaje){
  int valor;
  do{
    printf ("%s", mensaje);
    scanf("%d", &valor);
  }while(valor<=0);
  return valor;
}

int leerEnteroEntre(char* mensaje, int min, int max){
  int valor;
  do{
    printf("%s", mensaje);
    scanf("%d", &valor);
  }while(valor < min || valor > max);
  return valor;
}


float leerFlotantePositivo(char* mensaje){
  float valor;
  do{
    printf ("%s", mensaje);
    scanf("%f", &valor);
  }while(valor<=0);
  return valor;
}

float leerFlotanteEntre(char* mensaje, float min, float max){
  float valor;
  do{
    printf("%s", mensaje);
    scanf("%f", &valor);
  }while(valor < min || valor > max);
  return valor;
}

char leerCaracter(char* mensaje){
  char valor;
  printf("%s", mensaje);
  scanf("%c", &valor);
  return valor; 
}

void leerNombre(char nombre[MAX_NOMBRE]) {
    printf("Ingrese el nombre: ");
    scanf("%s", nombre);
}

int leerEntero() {
    int valor;
    printf("Ingrese un número entero: ");
    scanf("%d", &valor);
    return valor;
}

float leerFlotante() {
    float valor;
    printf("Ingrese un número flotante: ");
    scanf("%f", &valor);
    return valor;
}