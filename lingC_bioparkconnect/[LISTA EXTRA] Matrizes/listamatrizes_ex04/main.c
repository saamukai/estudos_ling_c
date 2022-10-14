/* Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y . */

#include <stdio.h>
#include <stdlib.h> 

int main () {

    float soma = 0;
    float vet[8];
    int pos1 = 0, pos2 = 0;

    for (int i=0; i < 8; i++)
    {
        printf("Digite o %do elemento do vetor: ", i + 1);
        scanf("%f", &vet[i]);
    }

    printf("Digite a 1o posicao para somar: ");
    scanf("%d", &pos1);
    printf("Digite a 2a posicao para somar: ");
    scanf("%d", &pos2);

    soma = vet[pos1] + vet[pos2];

    printf("A soma das posicoes digitadas = vet[%d] + vet[%d] = %.2f\n ", pos1, pos2, soma);

    return 0;
}
