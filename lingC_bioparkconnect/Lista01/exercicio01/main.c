/*1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um
terreno e depois exibir a área do terreno */

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
