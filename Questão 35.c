/******************************************************************************

Questao 35:
Ler o raio e a altura de um cilindro. Calcular e imprimir o volume desse cilindro.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float raio, altura, volume;
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = 3.14 * pow(raio, 2) * altura;
    printf("Volume do cilindro: %.2f\n", volume);

    return 0;
}