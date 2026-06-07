/******************************************************************************

Questao 41:
Uma revendedora de carros usados paga a seus funcionários um salário fixo por
mês  e  uma  comissão  também  fixa  por  cada  carro  vendido  e  mais  5%  do  valor
das vendas por ele efetuadas. Ler o número do vendedor, o nome do vendedor,
o número de carros vendidos por ele, o valor total de suas vendas, o salário fixo
e  o  valor  que  recebe  por  carro  vendido.  Ao  final,  calcular  e  imprimir  o  salário
mensal do vendedor, juntamente com seu código de vendedor e nome.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero_vendedor, num_carros_vendidos;
    char nome_vendedor[50];
    double valor_total_vendas, salario_fixo, comissao_por_carro, salario_mensal;

    printf("Digite o número do vendedor: ");
    scanf("%d", &numero_vendedor);
    printf("Digite o nome do vendedor: ");
    scanf("%s", nome_vendedor);
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &num_carros_vendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%lf", &valor_total_vendas);
    printf("Digite o salário fixo: ");
    scanf("%lf", &salario_fixo);
    printf("Digite a comissão por carro vendido: ");
    scanf("%lf", &comissao_por_carro);

    salario_mensal = salario_fixo + (comissao_por_carro * num_carros_vendidos) + (0.05 * valor_total_vendas);

    printf("Número do vendedor: %d\n", numero_vendedor);
    printf("Nome do vendedor: %s\n", nome_vendedor);
    printf("Salário mensal do vendedor: %.2lf\n", salario_mensal);

    return 0;
}