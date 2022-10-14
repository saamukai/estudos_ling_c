/* Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores.  */

#include <stdio.h>
#include <stdlib.h>

void leVetor (float vetor[], int tamanho);
void imprimeVetor (float vetor[], int tamanho);

int main () {
    float vet[5];
    int tam = 5;
    float maior=0, menor = 0, soma=0, media=0;

    leVetor(vet, tam);
    imprimeVetor(vet, tam);

    maior = vet[0];
    menor = vet[0];

    for (int i=0; i<tam; i++)
    {
        soma+=vet[i];
        if(vet[i]>maior)
            maior = vet[i];
        else if (vet[i]<menor)
            menor = vet[i];
    }
    media = soma / tam;

    printf("O maior elemento do vetor: %.2f\n", maior);
    printf("O menor elemento do vetor: %.2f\n", menor);
    printf("A media dos elementos do vetor: %.2f\n", media);
}

void leVetor (float vetor[], int tamanho)
{
    for (int i=0; i<tamanho; i++) {
        printf("Digite o %do elemento: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void imprimeVetor (float vetor[], int tamanho)
{
    printf("Vetor: [ ");
    for (int i=0; i<tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("]\n");
}