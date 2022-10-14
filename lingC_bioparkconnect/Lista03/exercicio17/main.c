#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, bebida, total;

    do {
        peso = 1;
        printf("Digite o valor da bebida: ");
        scanf("%f", &bebida);
        printf("Digite o peso do prato: ");
        scanf("%f", &peso);
        peso*=23.59;
        total+=bebida+peso;
    } while (peso!=0 && bebida!=0);

    printf("O total da conta eh: %.2f reais\n", total);

    return 0;
}
