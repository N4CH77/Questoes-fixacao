/******************************************************************************

Questao 16:
Ler a idade de três indivíduos e imprimir a média de idade deles 

*******************************************************************************/
#include <stdio.h>

int main() {
int idade1, idade2, idade3, media;

printf("Digite a sua idade: ");
scanf("%d", &idade1); 

printf("Digite a idade da sua mãe: ");
scanf("%d", &idade2); 

printf("Digite a idade do seu pai: ");
scanf("%d", &idade3); 

media = (idade1 + idade2 + idade3) / 3;
printf("A média entre a idade da sua família é: %d\n", media);
}
