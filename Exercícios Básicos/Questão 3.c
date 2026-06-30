/******************************************************************************

Questao 3:
Ler dois numeros e imprimir a soma deles.

*******************************************************************************/
#include <stdio.h>

int main() {
float num1, num2, soma;
    
printf("Digite um numero da sua escolha: ");
scanf("%f", &num1); 

printf("Digite um segundo numero da sua escolha: ");
scanf("%f", &num2); 

soma = num1 + num2;
printf("O resultado da soma é: %.2f\n", soma);
}
