/******************************************************************************

Questao 8:
Ler dois números inteiros e imprimir o primeiro elevado ao segundo e depois o 
segundo elevado ao primeiro.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
float num1, num2, resultado1, resultado2;
    
printf("Digite um numero da sua escolha: ");
scanf("%f", &num1); 

printf("Digite um segundo numero da sua escolha: ");
scanf("%f", &num2); 

resultado1 = pow(num1, num2);
resultado2 = pow(num2, num1);

printf("O primeiro numero elevado ao segundo é: %.2f\n", resultado1);
printf("O segundo numero elevado ao primeiro é: %.2f\n", resultado2);
}