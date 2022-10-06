/*  Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e imprima o vetor lido */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int tam, *vet;

    printf("Digite o tamanho da array: ");
    scanf("%d", &tam);

    vet = (int*)malloc(tam * sizeof(int));

    for (int i = 0; i < tam; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("VETOR: [ ");
    for (int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("]");

    free(vet);

    return 0;
}