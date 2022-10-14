/* Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui.
Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui
6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[]={0};
    int idade=0;

    printf("\n=========== CALCULA DIAS =========\n\n");
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n%s, voce ja viveu %d dias\n", nome, (idade*365));

    return 0;
}
