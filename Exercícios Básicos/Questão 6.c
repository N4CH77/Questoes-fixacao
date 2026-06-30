/******************************************************************************

Questao 6:
Ler um número e imprimir sua raiz quadrada.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
double num, raiz;
    
printf("Digite um numero da sua escolha: ");
scanf("%lf", &num); 

raiz = sqrt(num);
printf("A raiz quadrada desse numero é: %.2f\n", raiz);
}
