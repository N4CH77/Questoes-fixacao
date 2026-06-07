/******************************************************************************

Questao 20:
Escreva  um  programa  para  leia  um  conjunto  de  10  números  e  indique  a 
quantidade de pares e ímpares.

*******************************************************************************/
#include <stdio.h>

int main() {
int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
int pares = 0, impares = 0;
    
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

printf("Digite um sexto da sua escolha: ");
scanf("%d", &num6); 

printf("Digite um sétimo numero da sua escolha: ");
scanf("%d", &num7); 

printf("Digite um oitavo numero da sua escolha: ");
scanf("%d", &num8); 

printf("Digite um nono numero da sua escolha: ");
scanf("%d", &num9); 

printf("Digite um décimo numero da sua escolha: ");
scanf("%d", &num10); 

if (num1 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num2 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num3 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num4 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num5 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num6 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num7 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num8 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num9 % 2 == 0) {
    pares++;
} else {
    impares++;
}
if (num10 % 2 == 0) {
    pares++;
} else {
    impares++;
}

printf("Números pares: %d\n", pares);
printf("Números ímpares: %d\n", impares);

return 0;
}