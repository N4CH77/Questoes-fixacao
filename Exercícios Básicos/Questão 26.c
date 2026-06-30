/******************************************************************************

Questao 26:
Faça um programa para imprimir a sequência abaixo para um n informado pelo 
usuário.  Use  uma  função  que  receba  um  valor  n inteiro  e  imprima  até  a  n-
ésima linha.

*******************************************************************************/
#include <stdio.h>

void imprimeSequencia(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n"); 
    }
}

int main() {
    int n;
    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);

    imprimeSequencia(n);

    return 0;
}