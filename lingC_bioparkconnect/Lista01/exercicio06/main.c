/* O restaurante a quilo Bem-B?o cobra R$12,00 por cada quilo de refei??o. Escreva um algoritmo que leia o
peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balan?a j? desconte
o peso do prato. */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoPrato=0, valorRefeicao = 12.00;

    printf("Digite o peso do prato em Kg (ex: 1.200): ");
    scanf("%f", &pesoPrato);

    pesoPrato *= valorRefeicao;

    printf("\nO valor a pagar eh: %.3f\n", pesoPrato);

    return 0;
}
