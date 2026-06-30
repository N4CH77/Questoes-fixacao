/******************************************************************************

Questao 34:
Ler o raio de uma esfera. Calcular e imprimir o volume dessa esfera.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float raio, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0 / 3.0) * 3.14 * pow(raio, 3);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
