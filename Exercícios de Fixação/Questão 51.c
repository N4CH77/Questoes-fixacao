/******************************************************************************

Questao 51:
Faça um programa que desenhe um retângulo usando o caracter ‘*’. Devem ser
lidos dois parâmetros, linhas e colunas, sendo que o valor por omissão é o valor
mínimo  igual  a  1  e  o  valor  máximo  é  20.  Se  valores  fora  da  faixa  forem
informados, eles devem ser convertidos para os valores permitidos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int linhas, colunas;

    printf("Digite o número de linhas (1-20): ");
    scanf("%d", &linhas);
    if (linhas < 1)
    {
        linhas = 1;
    }
    else if (linhas > 20)
    {
        linhas = 20;
    }

    printf("Digite o número de colunas (1-20): ");
    scanf("%d", &colunas);
    if (colunas < 1)
    {
        colunas = 1;
    }
    else if (colunas > 20)
    {
        colunas = 20;
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}