/******************************************************************************

Questao 37:
Um  motorista anota  a  quilometragem (odômetro)  do seu  veículo antes e
depois de cada viagem, bem como os litros de combustível gasto. Ler esses três
dados e o preço do combustível e imprimir:
a) A quilometragem rodada;
b) Quantos quilômetros por litro faz o veículo;
c) O custo da viagem.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float odometro_inicial, odometro_final, litros_gastos, preco_combustivel;

    printf("Digite a quilometragem do odômetro antes da viagem: ");
    scanf("%f", &odometro_inicial);

    printf("Digite a quilometragem do odômetro depois da viagem: ");
    scanf("%f", &odometro_final);

    printf("Digite os litros de combustível gasto: ");
    scanf("%f", &litros_gastos);

    printf("Digite o preço do combustível por litro: ");
    scanf("%f", &preco_combustivel);

    float quilometragem_rodada = odometro_final - odometro_inicial;

    float km_por_litro = quilometragem_rodada / litros_gastos;

    float custo_viagem = litros_gastos * preco_combustivel;

    printf("a) A quilometragem rodada: %.2f km\n", quilometragem_rodada);
    printf("b) Quantos quilômetros por litro faz o veículo: %.2f km/l\n", km_por_litro);
    printf("c) O custo da viagem: R$ %.2f\n", custo_viagem);

    return 0;
}