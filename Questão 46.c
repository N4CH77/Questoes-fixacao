/******************************************************************************

Questao 46:
Ler  as  coordenadas  de  dois  pontos  no  plano,  (X1,  Y1)  e  (X2,  Y2).  Calcular  e
imprimir a distância euclidiana entre eles.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double X1, Y1, X2, Y2;
    double distancia;

    printf("Digite as coordenadas do primeiro ponto (X1 Y1): ");
    scanf("%lf %lf", &X1, &Y1);
    printf("Digite as coordenadas do segundo ponto (X2 Y2): ");
    scanf("%lf %lf", &X2, &Y2);

    distancia = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    printf("Distância euclidiana entre os pontos: %.2lf\n", distancia);

    return 0;
}