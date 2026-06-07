/******************************************************************************

Questao 29:
Faça  um  programa  que  leia  a  quantidade  de  dias  de  permanência  no  hotel  de 
cada  hóspede.  Sabe-se  que  o  valor  da  diária  é  R$  150,00.  Aplique as  regras  da 
tabela abaixo para determinar o valor a pagar por cada hóspede. Para finalizar 
deve ser informado zeros para a quantidade de diárias. Calcule e imprima: 
a) Quantidade de hóspedes que ficou mais de 20 dias no hotel; 
b) Valor de cada hóspede; 
c) Média do valor das contas pagas pelos hóspedes. 
d) Média dias permanência; 
e) O valor da maior conta paga.

*******************************************************************************/
#include <stdio.h>

int main() {
    int dias;
    float valorDiaria = 150.0;
    int hospedes = 0, maisDe20Dias = 0;
    float somaValores = 0, somaDias = 0, maiorConta = 0;

    while (1) {
        printf("Digite a quantidade de dias (0 para sair): ");
        scanf("%d", &dias);

        if (dias == 0) break;

        float valorBruto = dias * valorDiaria;
        float desconto = 0;

        if (dias <= 5) {
            desconto = 0.05;
        } else if (dias <= 10) {
            desconto = 0.10;
        } else {
            desconto = 0.15;
        }

        float valorFinal = valorBruto * (1 - desconto);

        printf("Valor a pagar pelo hóspede: R$ %.2f\n", valorFinal);

        hospedes++;
        somaValores += valorFinal;
        somaDias += dias;

        if (dias > 20) {
            maisDe20Dias++;
        }
        if (valorFinal > maiorConta) {
            maiorConta = valorFinal;
        }
    }

    if (hospedes > 0) {
        float mediaValores = somaValores / hospedes;
        float mediaDias = somaDias / hospedes;

        printf("\nQuantidade de hóspedes que ficaram mais de 20 dias: %d\n", maisDe20Dias);
        printf("Média do valor das contas: R$ %.2f\n", mediaValores);
        printf("Média de dias de permanência: %.2f\n", mediaDias);
        printf("Maior conta paga: R$ %.2f\n", maiorConta);
    } else {
        printf("Nenhum hóspede informado.\n");
    }

    return 0;
}