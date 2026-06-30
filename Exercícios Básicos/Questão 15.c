/******************************************************************************

Questao 15:
Calcular e imprimir a média aritmética de 5 notas.

*******************************************************************************/
#include <stdio.h>

int main() {
int nota1, nota2, nota3, nota4, nota5, media;

printf("Digite a nota da sua primeira prova: ");
scanf("%d", &nota1); 

printf("Digite a nota da sua segunda prova: ");
scanf("%d", &nota2); 

printf("Digite a nota da sua terceira prova: ");
scanf("%d", &nota3); 

printf("Digite a nota da sua quarta prova: ");
scanf("%d", &nota4); 

printf("Digite a nota da sua quinta prova: ");
scanf("%d", &nota5); 

media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
printf("A média aritimética das notas da provas é: %d\n", media);

}
