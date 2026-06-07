/******************************************************************************

Questao 7:
Ler um número e imprimir seu quadrado.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
double num, quad;
    
printf("Digite um numero da sua escolha: ");
scanf("%lf", &num); 

quad = num * num;
printf("O quadrado desse numero é: %.2f\n", quad);
}