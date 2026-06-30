/******************************************************************************

Questao 39:
O  custo  ao  consumidor  de  um  carro  novo  é  a  soma  do  custo  de  fábrica,
acrescido  da  porcentagem  do  distribuidor,  mais  os  impostos  (aplicados  ao
custo de fábrica). Supondo que a porcentagem do distribuidor seja de 28% e os
impostos  de  45%,  ler  o  custo  de  fábrica  de  um  carro  e  imprimir  o  custo  do
consumidor.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float fabrica, consumidor;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &fabrica);

    consumidor = fabrica + (fabrica * 0.28) + (fabrica * 0.45);

    printf("O custo ao consumidor é: R$ %.2f\n", consumidor);

    return 0;
}