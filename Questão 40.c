/******************************************************************************

Questao 40:
Ler três números positivos e inteiros (A, B, C) e calcular a expressão  D = (R + S)
/ 2, onde R = (A + B) ² e S = (B + C)².

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A, B, C;
    double R, S, D;

    printf("Digite três números positivos e inteiros (A B C): ");
    scanf("%d %d %d", &A, &B, &C);

    R = (A + B) * (A + B); // R = (A + B)²
    S = (B + C) * (B + C); // S = (B + C)²
    D = (R + S) / 2;       // D = (R + S) / 2

    printf("O valor de D é: %.2lf\n", D);

    return 0;
}