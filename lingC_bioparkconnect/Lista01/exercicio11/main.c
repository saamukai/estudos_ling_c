/* Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias=0, anos=0, meses=0;
    int diasTotal=0;

    printf("Digite quantos dias esta sem acontecer acidentes: ");
    scanf("%d", &diasTotal);
    printf("\nOs %d dias digitados", diasTotal);

    anos=diasTotal/360;
    diasTotal -= (anos*360);
    meses=diasTotal/30;
    diasTotal -= (meses*30);
    dias = diasTotal;

    printf(" representam %d anos, %d meses e %d dias.\n", anos, meses, dias);

    return 0;
}
