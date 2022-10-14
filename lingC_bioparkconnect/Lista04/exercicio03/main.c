/* Criar um vetor A com 8 elementos inteiros.
Construir um vetor B de mesmo tipo e tamanho e
com os elementos do vetor A multiplicados por 2, ou seja: B[i] = A[i] * 2. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[8];
    int vetorB[8];


        // Ler vetor
    for(int i=0; i<8; i++)
    {
        printf("Digite o valor do vetor A no indice %d: ", i);
        scanf("%d", &vetorA[i]);
        vetorB[i]= vetorA[i]*2; // Constroi  o vetor B a partir dos elementos do vetor A
    }

        // imprime o vetor B
    printf("\nVETOR B: ");
    for (int i=0; i<8; i++)
        printf("%d ", vetorB[i]);

    return 0;
}
