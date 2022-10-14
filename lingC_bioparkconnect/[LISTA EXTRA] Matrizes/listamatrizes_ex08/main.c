/*  Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Vetor na Ordem Inversa: [ ");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }
    printf("]\n");
   
    return 0;
}