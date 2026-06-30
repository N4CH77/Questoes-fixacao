/******************************************************************************

Questao 50:
Elabore um programa para simular o jogo de adivinhação:
• o jogador-1 escolhe um número entre  1 e 10;
• o jogador-2 insere no jogo números na tentativa de acertar o número
escolhido pelo jogador-1.
• O jogador-2 possui 4 chances para tentar adivinhar o número do
jogador-1.
Ao final o programa deve informar se ele adivinhou o número, se sim, em qual
das tentativas.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero_secreto, tentativa;
    int chances = 4;
    int acertou = 0;

    printf("Jogador 1, escolha um número entre 1 e 10: ");
    scanf("%d", &numero_secreto);

    if (numero_secreto < 1 || numero_secreto > 10)
    {
        printf("Número inválido. O número deve estar entre 1 e 10.\n");
        return 1;
    }

    printf("Jogador 2, você tem %d chances para adivinhar o número.\n", chances);

    for (int i = 1; i <= chances; i++)
    {
        printf("Tentativa %d: ", i);
        scanf("%d", &tentativa);

        if (tentativa == numero_secreto)
        {
            printf("Parabéns! Você acertou o número na tentativa %d.\n", i);
            acertou = 1;
            break;
        }
        else if (tentativa < numero_secreto)
        {
            printf("O número é maior que %d.\n", tentativa);
        }
        else
        {
            printf("O número é menor que %d.\n", tentativa);
        }
    }

    if (!acertou)
    {
        printf("Você não acertou o número. O número era %d.\n", numero_secreto);
    }

    return 0;
}