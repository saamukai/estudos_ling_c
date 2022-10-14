/*Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10];
    int vet2[10];
    int vetRes[10];

    for(int i=0; i<10; i++)
    {
        printf("Digite o valor do vetor 1 no indice %d: ", i);
        scanf("%d", &vet1[i]);
        printf("Digite o valor do vetor 2 no indice %d: ", i);
        scanf("%d", &vet2[i]);
        vetRes[i]=vet1[i]+vet2[i];
    }

    printf("\nVETOR RESULTANTE: ");

    for (int i=0; i<10; i++)
        printf("%d ", vetRes[i]);

    printf("\n");

    return 0;
}
