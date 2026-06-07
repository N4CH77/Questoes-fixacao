/******************************************************************************

Questao 30:
Ler um número natural entre 0 e 9 e imprimir sua tabuada. 

*******************************************************************************/
#include <stdio.h>

int main(){
    int numero, tabuada;

    printf("Digite um numero natural (0 a 9): ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}