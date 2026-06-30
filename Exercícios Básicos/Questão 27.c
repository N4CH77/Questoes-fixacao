/******************************************************************************

Questao 27:
Seja  N  um  número  quadrado  perfeito.  Se  somarmos  os  números  ímpares 
consecutivos (1+3+5+7+9+...) até que esta soma seja igual a N, o número M de 
termos somados será igual a raiz quadrada de N.  Exemplo: N = 16 16 = 1 + 3 + 5 
+ 7 M = 4 termos. Logo, a raiz quadrada de 16 é 4. Devem ser solicitados vários 
números. O programa deve ser finalizado quando for informado N zero.

*******************************************************************************/
#include <stdio.h>

int main() {
    int N;

    while (1) {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &N);

        if (N == 0) break;

        int soma = 0, contador = 0, impar = 1;

        while (soma < N) {
            soma += impar;
            contador++;
            impar += 2;
        }

        if (soma == N) {
            printf("N = %d é quadrado perfeito.\n", N);
            printf("Raiz quadrada de %d é %d (usando %d termos).\n", N, contador, contador);
        } else {
            printf("N = %d não é quadrado perfeito.\n", N);
        }
    }

    return 0;
}