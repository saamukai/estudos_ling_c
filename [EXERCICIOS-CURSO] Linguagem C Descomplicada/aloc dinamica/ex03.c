/* Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e mostre quantos dos ´
numeros s ´ ao pares e quantos s ˜ ao˜ ´ımpares.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int tam, *vet;
    int par = 0, impar = 0;

    printf("Digite o tamanho da array: ");
    scanf("%d", &tam);

    vet = (int*)malloc(tam * sizeof(int));

    for (int i = 0; i < tam; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vet[i]);
        if ((vet[i]%2)==0)
            par++;
        else
            impar++;
    }

    printf("VETOR: [ ");
    for (int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("]\n");

    printf("Numeros pares: %d", par);
    printf("\nNumeros Impares: %d", impar);

    free(vet);

    return 0;
}