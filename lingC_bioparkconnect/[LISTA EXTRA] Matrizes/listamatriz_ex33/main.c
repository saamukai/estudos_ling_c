/* Fac¸a um programa que leia um vetor de 15 posic¸oes e o compacte, ou seja, elimine as ˜
posic¸oes com valor zero. Para isso, todos os elementos ˜ a frente do valor zero, devem ser `
movidos uma posic¸ao para tr ˜ as no vetor. */

#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main (){
    int vet[TAM];
    int contaZeros = 0, novoTamanho = 0;

    for (int i = 0; i < TAM; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vet[i]);
        if(vet[i]==0)
            contaZeros++;
    }
    printf("Vetor Digitado: [ ");
    for (int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
    printf("]\n");

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (vet[j] == 0)
            {
                int aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }

    novoTamanho = TAM - contaZeros;
    int newVet[novoTamanho];

    for (int i = 0; i < novoTamanho; i++) {
        if(vet[i]!=0)
            newVet[i] = vet[i];
    }

    printf("Vetor Comprimido = [ ");
    for (int i = 0; i < novoTamanho; i++) {
        printf("%d ", newVet[i]);
    }
    printf("]\n");

    return 0;
}