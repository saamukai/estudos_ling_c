/*. Entrar com o dia e o m?s de uma data e informar quantos dias se passaram desde o in?cio do ano. Esque?a
a quest?o dos anos bissextos e considere sempre que um m?s possui 30 dias. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes=0, dias=0;

    printf("\nDigite o dia e o mes do ano no modelo 00/00 (ex: 21/02): ");
    scanf("%d/%d", &dias, &mes);

    if (mes==01)
        printf("Se passaram %d dias desde o inicio do ano\n", dias);

    else
        printf("Se passaram %d dias desde o inicio do ano\n", (((mes-1)*30)+dias));

    return 0;
}
