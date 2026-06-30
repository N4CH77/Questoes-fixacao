/******************************************************************************

Questao 5:
Ler um numero e imprimir seu sucessor.

*******************************************************************************/
#include <stdio.h>

int main() {
float num, sucessor;
    
printf("Digite um numero da sua escolha: ");
scanf("%f", &num); 

sucessor = num + 1;
printf("O sucessor desse numero é: %.2f\n", sucessor);
}

