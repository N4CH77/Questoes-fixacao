/******************************************************************************

Questao 19:
Faça um programa que leia 5 números e imprima quantos números  positivos 
foram digitados.

*******************************************************************************/
#include <stdio.h>

int main() {
int num1, num2, num3, num4, num5;
int contador_positivo = 0;
    
printf("Digite um numero da sua escolha: ");
scanf("%d", &num1); 

printf("Digite um segundo numero da sua escolha: ");
scanf("%d", &num2); 

printf("Digite um terceiro numero da sua escolha: ");
scanf("%d", &num3); 

printf("Digite um quarto numero da sua escolha: ");
scanf("%d", &num4); 

printf("Digite um quinto numero da sua escolha: ");
scanf("%d", &num5); 

if (num1 > 0) {
    contador_positivo++;
}  
if (num2 > 0) {
    contador_positivo++;
}  
if (num3 > 0) {
    contador_positivo++;
}  
if (num4 > 0) {
    contador_positivo++;
}  
if (num5 > 0) {
    contador_positivo++;
}  

printf("Positivos: %d\n", contador_positivo);
}