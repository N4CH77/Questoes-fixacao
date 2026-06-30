/******************************************************************************

Questao 28:
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados 
de  altura  e  sexo  (0=masc,  1=fem)  das  pessoas.  Faça  um  programa  que  leia  50 
dados diferentes e informe: 
a) A média de altura das mulheres; 
b) A média de altura da população; 
c) O percentual de homens na população; 
d) A quantidade de mulheres; 
e) O percentual das mulheres abaixo de 1.65 m 

*******************************************************************************/
#include <stdio.h>

int main() {
    float altura;
    int sexo;

    int numHomens = 0, numMulheres = 0, mulheresBaixas = 0;
    float somaAlturasMulheres = 0, somaAlturasTotal = 0;

    for (int i = 0; i < 50; i++) {
        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &altura);

        printf("Digite o sexo (0 - masculino, 1 - feminino): ");
        scanf("%d", &sexo);

        somaAlturasTotal += altura;

        if (sexo == 0) {
            numHomens++;
        } else if (sexo == 1) {
            numMulheres++;
            somaAlturasMulheres += altura;
            if (altura < 1.65) {
                mulheresBaixas++;
            }
        }
    }

    float mediaMulheres = (numMulheres > 0) ? somaAlturasMulheres / numMulheres : 0;
    float mediaPopulacao = somaAlturasTotal / 50;
    float percentualHomens = (numHomens * 100.0) / 50;
    float percentualMulheresBaixas = (numMulheres > 0) ? (mulheresBaixas * 100.0 / numMulheres) : 0;

    printf("Média da altura das mulheres: %.2f\n", mediaMulheres);
    printf("Média da altura da população: %.2f\n", mediaPopulacao);
    printf("Percentual de homens na população: %.2f%%\n", percentualHomens);
    printf("Quantidade de mulheres: %d\n", numMulheres);
    printf("Percentual de mulheres abaixo de 1.65m: %.2f%%\n", percentualMulheresBaixas);

    return 0;
}