/******************************************************************************

Questao 12:
Ler um número, se o mesmo for par  imprimir os próximos 10 números pares 
seguintes.

*******************************************************************************/
#include <stdio.h>

int main() {
int num, numeros_pares;
    
printf("Digite um numero da sua escolha: ");
scanf("%d", &num); 

if (num % 2 == 0) {
    for (int i = 1; i <= 10; i++) {
        numeros_pares = num + 2 * i;
        printf("Os proximos dez numeros pares apos esse sao: %d\n", numeros_pares);
    }
}
}