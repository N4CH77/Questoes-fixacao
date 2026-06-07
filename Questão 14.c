/******************************************************************************

Questao 14:
Fazer um algoritmo ECO. Ler 5 números, sendo que o algoritmo deve imprimir 
imediatamente cada número lido.

*******************************************************************************/
#include <stdio.h>

int main() {
int num1, num2, num3, num4, num5;
    
printf("Digite um numero da sua escolha: ");
scanf("%d", &num1); 
printf("Você digitou: %d\n", num1);

printf("Digite um segundo numero da sua escolha: ");
scanf("%d", &num2); 
printf("Você digitou: %d\n", num2);

printf("Digite um terceiro numero da sua escolha: ");
scanf("%d", &num3); 
printf("Você digitou: %d\n", num3);

printf("Digite um quarto numero da sua escolha: ");
scanf("%d", &num4); 
printf("Você digitou: %d\n", num4);

printf("Digite um quinto numero da sua escolha: ");
scanf("%d", &num5); 
printf("Você digitou: %d\n", num5);

return 0;
}