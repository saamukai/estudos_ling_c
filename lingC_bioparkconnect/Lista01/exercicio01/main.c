/*1. A imobili?ria Im?bilis vende apenas terrenos retangulares. Fa?a um algoritmo para ler as dimens?es de um
terreno e depois exibir a ?rea do terreno */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double base =0, altura=0;

    printf("Digite as dimensoes do terreno (em metros) separadas por espaco: ");
    scanf("%lf %lf", &base, &altura);
    printf("\nA area total do terreno eh: %.2lf metros quadrados\n\n", (base*altura));

    return 0;
}
