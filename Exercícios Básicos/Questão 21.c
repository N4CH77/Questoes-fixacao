/******************************************************************************

Questao 21:
Escreva  um  programa  para  ler  dois  números  inteiros  e  mostrar  na  tela  o 
produto entre eles, sendo que este cálculo deve ser realizado através de soma 
sucessivas. Exemplo: 3 x 5 = 3 + 3 + 3 + 3 + 3  ou    5 + 5 + 5.

*******************************************************************************/
#include <stdio.h>

int main() {
int num1, num2;
int produto = 0;

printf("Digite um numero da sua escolha: ");
scanf("%d", &num1); 

printf("Digite um segundo numero da sua escolha: ");
scanf("%d", &num2); 

printf("%d x %d = ", num1, num2);

for (int i = 0; i < num2; i++) {
    produto += num1;
    if (i < num2 - 1) {
    printf("%d + ", num1);
    } else {
    printf("%d", num1);
    }
}

printf(" = %d\n", produto);

return 0;

}
