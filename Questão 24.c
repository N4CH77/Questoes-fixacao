/******************************************************************************

Questao 24:
Faça um programa que resolva o somatório abaixo: 

*******************************************************************************/
#include <stdio.h>

int main(){
    double termo;
    double S = 0;

    for (int i = 1; i <= 50; i++)
    {
        termo = (51.0 - i) / i;
        S = S + termo;
    }

    printf("Resultado: %.2lf\n", S);

    return 0;
}