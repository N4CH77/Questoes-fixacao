/******************************************************************************

Questao 25:
Construa um programa que calcule a área total de uma residência (sala, 
cozinha, quartos, etc., sendo todos eles retangulares). O usuário deverá entrar 
com  a  largura  (L)  e  o  comprimento  (C)  de  cada  cômodo  da  casa.  Em  seguida 
deverá  ser  apresentada  uma  pergunta,  solicitando  a  confirmação  do  usuário 
para  continuar  com  a  entrada  de  dados  (a  confirmação  será  dada  quando  o 
usuário entrar com “1”). Quando o usuário informar “0” deve ser exibida a área 
total.

*******************************************************************************/
#include <stdio.h>

int main() {
    float largura, comprimento;
    float areaTotal = 0;
    int continuar = 1;

    while (continuar == 1) {
        printf("Digite a largura do cômodo: ");
        scanf("%f", &largura);

        printf("Digite o comprimento do cômodo: ");
        scanf("%f", &comprimento);

        areaTotal += largura * comprimento;

        printf("Deseja continuar? (1 - sim, 0 - não): ");
        scanf("%d", &continuar);
    }

    printf("Área total da residência: %.2f metros quadrados\n", areaTotal);

    return 0;
}