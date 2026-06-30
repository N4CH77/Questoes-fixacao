/******************************************************************************

Questao 31:
Ler  a  quantidade de  anos  que um  fumante já  fuma,  o  número  de  cigarros  que 
fuma por dia, e o preço de uma carteira de cigarros e calcular a quantidade de 
dinheiro que esse fumante já gastou. Imprimir o resultado.

*******************************************************************************/
#include <stdio.h>

int main() {
    int anos, cigarrosPorDia;
    float precoCarteira;

    printf("Digite há quantos anos você fuma: ");
    scanf("%d", &anos);

    printf("Digite o número de cigarros por dia: ");
    scanf("%d", &cigarrosPorDia);

    printf("Digite o preço da carteira de cigarros: ");
    scanf("%f", &precoCarteira);

    // cálculo
    int totalCigarros = anos * 365 * cigarrosPorDia;
    float totalCarteiras = totalCigarros / 20.0; 
    float dinheiroGasto = totalCarteiras * precoCarteira;

    printf("Quantidade total de cigarros fumados: %d\n", totalCigarros);
    printf("Quantidade de carteiras: %.2f\n", totalCarteiras);
    printf("Dinheiro gasto: R$ %.2f\n", dinheiroGasto);

    return 0;
}
