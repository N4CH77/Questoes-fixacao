/******************************************************************************

Questao 36:
Sabendo-se que são necessários dezoito watts de iluminação por metro 
quadrado, ler a potência de lâmpada a ser utilizada (em watts) as dimensões de 
um  cômodo  de  residência  (largura  e  comprimento  em  metros).  Calcular  e 
imprimir o número de lâmpadas necessárias para iluminar tal cômodo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float largura, comprimento, potencia, area, iluminacao, numero_lampadas;

    printf("Digite a largura do cômodo (em metros): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do cômodo (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a potência da lâmpada (em watts): ");
    scanf("%f", &potencia);

    area = largura * comprimento;
    iluminacao = area * 18;
    numero_lampadas = iluminacao / potencia;

    printf("O número de lâmpadas necessárias é: %.0f\n", numero_lampadas);

    return 0;
}