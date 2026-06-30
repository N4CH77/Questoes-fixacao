/******************************************************************************

Questao 17:
Ler os lados de um triângulo retângulo e calcular a hipotenusa.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
double cateto1, cateto2, hipotenusa;

printf("Digite o valor do primeiro cateto: ");
scanf("%lf", &cateto1); 

printf("Digite o valor do segundo cateto: ");
scanf("%lf", &cateto2); 

hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
printf("A hipotenusa desse triângulo retângulo é: %.2f\n", hipotenusa);

return 0;
}
