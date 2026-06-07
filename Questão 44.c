/******************************************************************************

Questao 44:
Imprimir uma escala de temperaturas Celsius e em seguida a mesma escala de
temperaturas em Farenheit,  partindo  de zero  grau  Celsius  até  cinqüenta  graus
Celsius, de dez em dez graus.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Celsius\tFarenheit\n");
    for (int celsius = 0; celsius <= 50; celsius += 10)
    {
        double farenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d\t%.1lf\n", celsius, farenheit);
    }
    return 0;
}