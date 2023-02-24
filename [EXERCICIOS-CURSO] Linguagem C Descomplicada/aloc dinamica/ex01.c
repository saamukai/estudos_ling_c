/* Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, ´
(b) Pec¸a para o usuario digitar os 5 n ´ umeros no espac¸o alocado, ´
(c) Mostre na tela os 5 numeros, ´
(d) Libere a memoria alocada. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int tam = 5;
    int *vet = (int*)malloc(tam * sizeof(int));

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