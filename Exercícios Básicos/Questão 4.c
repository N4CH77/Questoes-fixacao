/******************************************************************************

Questao 4:
Ler dois numeros e imprimir a multiplicacao entre eles.

*******************************************************************************/
#include <stdio.h>

int main() {
float num1, num2, multiplicacao;
    
printf("Digite um numero da sua escolha: ");
scanf("%f", &num1); 

printf("Digite um segundo numero da sua escolha: ");
scanf("%f", &num2); 

multiplicacao = num1 * num2;
printf("O resultado da multiplicacao é: %.2f\n", multiplicacao);
}

