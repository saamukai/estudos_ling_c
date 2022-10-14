/* Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra. */ 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[10], posMaior=0, maior = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %do elemento do vetor: ", i + 1);
        scanf("%d", &vet[i]);

        if (i==0)
        {
            maior = vet[i];
            posMaior = i;
        }

        if (vet[i] > maior)
        {
            maior = vet[i];
            posMaior = i;
        }
    }

    printf("O maior elemento eh %d e esta na posicao %d no vetor\n", maior, posMaior);
    return 0;
}