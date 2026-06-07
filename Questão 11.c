/******************************************************************************

Questao 11:
Ler 5 valores, um de cada vez, e contar quantos destes valores são negativos, 
quantos são positivos e quantos são zero, imprimindo essa informação. 

*******************************************************************************/
#include <stdio.h>

int main() {
int num1, num2, num3, num4, num5;
int contador_positivo = 0, contador_negativo = 0, contador_zero = 0;
    
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
} else if (num1 < 0) {
    contador_negativo++;
} else {
    contador_zero++;
}  
if (num2 > 0) {
    contador_positivo++;
} else if (num2 < 0) {
    contador_negativo++;
} else {
    contador_zero++;
}  
if (num3 > 0) {
    contador_positivo++;
} else if (num3 < 0) {
    contador_negativo++;
} else {
    contador_zero++;
}  
if (num4 > 0) {
    contador_positivo++;
} else if (num4 < 0) {
    contador_negativo++;
} else {
    contador_zero++;
}  
if (num5 > 0) {
    contador_positivo++;
} else if (num5 < 0) {
    contador_negativo++;
} else {
    contador_zero++;
}  

printf("Positivos: %d\n", contador_positivo);
printf("Negativos: %d\n", contador_negativo);
printf("Zeros: %d\n", contador_zero);

return 0;
}