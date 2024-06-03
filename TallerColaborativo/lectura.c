#include <stdio.h>
#include "lectura.h"

int leerEnteroPositivo(char* mensaje){
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
    } while(valor <= 0);
    return valor;
}

int leerEntero(char* mensaje){
    int valor;
    printf("%s", mensaje);
    scanf("%d", &valor);
    return valor;
}

int leerEnteroEntre(char* mensaje, int min, int max){
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
    } while(valor < min || valor > max);
    return valor;
}

float leerFlotantePositivo(char* mensaje){
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
    } while(valor <= 0);
    return valor;
}

float leerFlotante(char* mensaje){
    float valor;
    printf("%s", mensaje);
    scanf("%f", &valor);
    return valor;
}

float leerFlotanteEntre(char* mensaje, float min, float max){
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
    } while(valor < min || valor > max);
    return valor;
}

float leerFlotanteMayorIgual(char* mensaje, float lim){
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
    } while(valor < lim);
    return valor;
}

char leerCaracter(char* mensaje) {
    char c;
    printf("%s", mensaje);
    c = getchar();
    while (getchar() != '\n');  
    return c;
}

