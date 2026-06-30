/******************************************************************************

Questao 23:
Tem-se  um  conjunto  de  dados  de  um  grupo  de  pessoas,  serão  coletados  a 
altura e o sexo (1 - masculino, 2 - feminino).  O final do conjunto é determinado 
quando for informada uma altura menor ou igual a zeros. Imprima: 
a) A maior e a menor altura do grupo; 
b) O número de homens; 
c) A média de altura das mulheres; 
d) O percentual de mulheres abaixo de 1,68.

*******************************************************************************/
#include <stdio.h>

int main() {
    float altura;
    int sexo;

    float maiorAltura = 0, menorAltura = 300; 
    int numHomens = 0, numMulheres = 0, mulheresBaixas = 0;
    float somaAlturasMulheres = 0;
    
    while (1) {
        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (altura <= 0) break;; 

        printf("Digite o sexo (1 - masculino, 2 - feminino): ");
        scanf("%d", &sexo);

        if (altura > maiorAltura) maiorAltura = altura;
        if (altura < menorAltura) menorAltura = altura;

        
        if (sexo == 1) {
            numHomens++;
        } else if (sexo == 2) {
            numMulheres++;
            somaAlturasMulheres += altura;
        if (altura < 1.68) {
                mulheresBaixas++;
        }
    }
}

    float mediaMulheres = (numMulheres > 0) ? somaAlturasMulheres / numMulheres : 0;
    float percentual = (numMulheres > 0) ? (mulheresBaixas * 100.0 / numMulheres) : 0;

    printf("Maior altura: %.2f\n", maiorAltura);
    printf("Menor altura: %.2f\n", menorAltura);
    printf("Número de homens: %d\n", numHomens);
    printf("Média da altura das mulheres: %.2f\n", mediaMulheres);
    printf("Percentual de mulheres abaixo de 1.68: %.2f%%\n", percentual);

    return 0;
}