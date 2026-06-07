/******************************************************************************

Questao 9:
Ler dois números inteiros e imprimir o resto da divisão entre eles.

*******************************************************************************/
#include <stdio.h>

int main() {
int num1, num2, resto;
    
printf("Digite um numero da sua escolha: ");
scanf("%d", &num1); 

printf("Digite um segundo numero da sua escolha: ");
scanf("%d", &num2); 

resto = num1 % num2;
printf("O resto da divisao é: %d\n", resto);
}