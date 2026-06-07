/******************************************************************************

Questao 49:
Foi feita uma pesquisa com um grupo de alunos de uma universidade, onde se
perguntou para cada aluno, o número de que utilizou o restaurante da
universidade, no  último mês.  O  final  é determinado  quando  for  digitado  valor
negativo para o número de vezes de uso. Construa um programa que
determine:
a) O percentual de alunos que utilizou menos de 10 vezes o restaurante;
b) O percentual de alunos que utilizou entre 10 e 15 vezes;
c) O percentual de alunos que utilizou o restaurante acima de 15 vezes;
d) O número de alunos entrevistados;

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vezes, total_alunos = 0;
    int menos_10 = 0, entre_10_15 = 0, mais_15 = 0;

    printf("Digite o número de vezes que o aluno utilizou o restaurante (valor negativo para encerrar): ");
    scanf("%d", &vezes);

    while (vezes >= 0)
    {
        total_alunos++;

        if (vezes < 10)
        {
            menos_10++;
        }
        else if (vezes <= 15)
        {
            entre_10_15++;
        }
        else
        {
            mais_15++;
        }

        printf("Digite o número de vezes que o aluno utilizou o restaurante (valor negativo para encerrar): ");
        scanf("%d", &vezes);
    }

    if (total_alunos > 0)
    {
        printf("Número de alunos entrevistados: %d\n", total_alunos);
        printf("Percentual de alunos que utilizou menos de 10 vezes: %.2f%%\n", (float)menos_10 / total_alunos * 100);
        printf("Percentual de alunos que utilizou entre 10 e 15 vezes: %.2f%%\n", (float)entre_10_15 / total_alunos * 100);
        printf("Percentual de alunos que utilizou o restaurante acima de 15 vezes: %.2f%%\n", (float)mais_15 / total_alunos * 100);
    }
    else
    {
        printf("Nenhum aluno foi entrevistado.\n");
    }

    return 0;
}