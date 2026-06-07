/******************************************************************************

Questao 33:
Ler o raio de um círculo. Calcular e imprimir a área desse círculo.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float raio, area;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = 3.14 * pow(raio, 2);
    printf("Área do círculo: %.2f\n", area);

    return 0;
}