/******************************************************************************

Questao 22:
Elabore  um  programa  que  imprima  a  tabuada  dos  números  solicitados  pelo 
usuário.  Você deve perguntar se o usuário deseja continuar (1-SIM ou 0-NÃO).

Formato:
num * 1 = resultado

*******************************************************************************/
#include <stdio.h>

int main(){
    int numero, continuar;

    do {
    printf("Gere a tabuada do numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    printf("\nDeseja continuar? (1-SIM / 0-NÃO): ");
    scanf("%d", &continuar);

    } while (continuar == 1);
    
    printf("\nProgama finalizado com sucesso!");
    
    return 0;
}