// 2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cavalos=0;
    int ferraduras=0;

    printf("======= COMPRA FERRADURA ========\n");
    printf("Digite quantos cavalos voce tem no seu hara: ");
    scanf("%d", &cavalos);
    ferraduras = cavalos*4;
    printf("O total de ferraduras necessarias para equipar seus cavalos sao %d ferraduras\n", ferraduras);

    return 0;
}
