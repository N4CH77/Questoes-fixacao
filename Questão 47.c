/******************************************************************************

Questao 47:
A Empresa “Sempre Venda”  remunera seus 1200 funcionários com salário fixo
mais comissão, conforme a tabela abaixo:
Quantidade Produtos Comissão por produto(R$)
Até  5 produtos 1,50
De 6 a 50 2,00
Acima de 50 2,50
Cada  funcionário  irá  informar  a  quantidade  de  produtos  vendidos  e  o  salário  fixo.
Pede-se:
a) O salário que cada funcionário receberá no mês;
b) A média dos salários pagos pela empresa.
c) O maior salário fixo.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int num_funcionarios = 1200;
    double salarios[num_funcionarios];
    double maior_salario_fixo = 0;
    double soma_salarios = 0;

    for (int i = 0; i < num_funcionarios; i++)
    {
        int quantidade_produtos;
        double salario_fixo, salario_total;

        printf("Funcionário %d:\n", i + 1);
        printf("Digite a quantidade de produtos vendidos: ");
        scanf("%d", &quantidade_produtos);
        printf("Digite o salário fixo: ");
        scanf("%lf", &salario_fixo);

        if (quantidade_produtos <= 5)
        {
            salario_total = salario_fixo + quantidade_produtos * 1.50;
        }
        else if (quantidade_produtos <= 50)
        {
            salario_total = salario_fixo + quantidade_produtos * 2.00;
        }
        else
        {
            salario_total = salario_fixo + quantidade_produtos * 2.50;
        }

        salarios[i] = salario_total;
        soma_salarios += salario_total;

        if (salario_fixo > maior_salario_fixo)
        {
            maior_salario_fixo = salario_fixo;
        }
    }

    double media_salarios = soma_salarios / num_funcionarios;

    printf("Média dos salários pagos pela empresa: %.2lf\n", media_salarios);
    printf("Maior salário fixo: %.2lf\n", maior_salario_fixo);

    return 0;
}