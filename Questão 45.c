/******************************************************************************

Questao 45:
 Ler  a  razão  de  uma  PA  (Progressão  Aritmética),  o  primeiro  termo,  o  último
termo e imprimir a soma dos elementos dessa PA.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double razao, primeiroTermo, ultimoTermo;
    double soma = 0;
    int n;

    printf("Digite a razão da PA: ");
    scanf("%lf", &razao);
    printf("Digite o primeiro termo da PA: ");
    scanf("%lf", &primeiroTermo);
    printf("Digite o último termo da PA: ");
    scanf("%lf", &ultimoTermo);

    n = (int)((ultimoTermo - primeiroTermo) / razao) + 1;

    for (int i = 0; i < n; i++)
    {
        soma += primeiroTermo + i * razao;
    }

    printf("Soma dos elementos da PA: %.2lf\n", soma);

    return 0;
}