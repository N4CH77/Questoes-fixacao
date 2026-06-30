/******************************************************************************

Questao 52:
Elabore  um  programa  que  leia  informações  de  uma  pesquisa  de  um  grupo  de
pessoas,  obtendo  as  seguintes  informações:  idade,  salário  bruto  e  se  já  teve
algum  acidente  de  trabalho  (1-Sim  /  0-  Não).  O final  da  leitura  deve  acontecer
quando  for  digitado  um  valor  de  salário  bruto  negativo.  Para  salário  bruto
acima de R$ 1500,00 é descontado o IR de 10% sobre o salário bruto, obtendo-
se  o  salário  líquido.  Para  valores  menores  ou  iguais  a  R$  1500,00  o  salário
líquido será o próprio salário bruto
a) Calcular  e  imprimir  a  média  de  idade  das  pessoas  que  já  sofreram
acidente de trabalho;
b) Imprimir o total de salários líquidos (em R$) pagos pela empresa.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade, acidente;
    float salario_bruto, salario_liquido;
    float soma_idade = 0, total_salarios = 0;
    int contador_acidentes = 0;

    do
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o salário bruto: ");
        scanf("%f", &salario_bruto);
        printf("Já teve acidente de trabalho? (1-Sim / 0-Não): ");
        scanf("%d", &acidente);

        if (acidente == 1)
        {
            soma_idade += idade;
            contador_acidentes++;
        }

        if (salario_bruto > 1500.0)
        {
            salario_liquido = salario_bruto - (salario_bruto * 0.1);
        }
        else
        {
            salario_liquido = salario_bruto;
        }

        total_salarios += salario_liquido;

    } while (salario_bruto >= 0);

    if (contador_acidentes > 0)
    {
        float media_idade = soma_idade / contador_acidentes;
        printf("Média de idade das pessoas que sofreram acidente: %.2f\n", media_idade);
    }
    else
    {
        printf("Nenhuma pessoa sofreu acidente.\n");
    }

    printf("Total de salários líquidos pagos pela empresa: R$ %.2f\n", total_salarios);

    return 0;
}