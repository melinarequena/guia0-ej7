/* Guia 0,  Ej 7
 Escriba un programa que declare una variable entera y que compruebe si es par o
impar utilizando el operador módulo (%). */

#include<stdio.h>
void paroimpar(int *);
int main(){
    int num, *numptr;
    printf("Ingrese el valor del num:\n");
    scanf("%d", &num);
    numptr = &num;
    paroimpar(numptr);
    return 0;
}

void paroimpar(int *numptr){
    if((*numptr)%2== 0){
        printf("El numero ingresado es par\n");
    } else
        printf("El numero es impar\n");
}