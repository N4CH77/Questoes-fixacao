/******************************************************************************

Questao 10:
Ler dois números inteiros e imprimir o quociente da divisão inteira entre eles

*******************************************************************************/
#include <stdio.h>

int main() {
int num1, num2, divisao;
    
printf("Digite um numero da sua escolha: ");
scanf("%d", &num1); 

printf("Digite um segundo numero da sua escolha: ");
scanf("%d", &num2); 

divisao = num1 / num2;
printf("O resultado da divisao é: %d\n", divisao);
}
