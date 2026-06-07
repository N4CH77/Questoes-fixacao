/******************************************************************************

Questao 38:
Uma empresa tem para um determinado funcionário os dados a seguir:
• NOME DO FUNCIONÁRIO
• NÚMERO DE HORAS QUE ELE TRABALHA
• NÚMERO DE DEPENDENTES
a) Considere que a empresa paga R$3,00 por hora R$100,00 por dependente.
São feitos descontos de 13,5% sobre o salário/trabalho. Faça um algoritmo
que imprima o nome do funcionário e o seu salário líquido

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[100];
    int horas_trabalhadas, dependentes;
    float salario_bruto, salario_liquido;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    salario_bruto = horas_trabalhadas * 3.00 + dependentes * 100.00;
    salario_liquido = salario_bruto - (salario_bruto * 0.135);

    printf("Nome do funcionário: %s\n", nome);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}