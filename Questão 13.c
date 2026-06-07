/******************************************************************************

Questao 13:
Ler um número e imprimir 5 sucessores deste número.

*******************************************************************************/
#include <stdio.h>

int main() {
int num, sucessores;
    
printf("Digite um numero da sua escolha: ");
scanf("%d", &num); 

for (int i = 1; i <= 5; i++) {
        sucessores = num + i;

printf("Os cinco sucessores desse numero são: %d\n", sucessores);
}
}