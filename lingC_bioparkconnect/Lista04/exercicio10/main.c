/* Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado – use o método de ordenação que preferir. */

// Bubble Sort

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=0, aux=0;

    printf("Digite a quantidade de elementos que tera o vetor: "); // LER TAMANHO DO VETOR
    scanf("%d", &tam);
    int vet[tam];

    //LER O VETOR
    for (int i=0; i<tam; i++)
    {
        printf("Digite o %do elemento do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }

    // ORDENA O VETOR
    for (int i=(tam-1); i>=0; i--)
    {
        for (int j=0; j<i; j++)
        {
            if (vet[j]>vet[j+1])
            {
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
            }
        }
    }

    // IMPRIME O VETOR
    printf("\nVETOR ORDENADO: [ ");
    for (int i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("]\n");

    return 0;
}
