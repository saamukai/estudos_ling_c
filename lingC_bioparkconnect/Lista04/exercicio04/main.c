/* Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C
é a soma dos respectivos elementos em A e B, ou seja:
C[i] = A[i] + B[i].  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[10];
    int vetB[10];
    int vetC[10];

    for(int i=0; i<10; i++)
    {
        printf("Digite o valor do vetor A no indice %d: ", i);
        scanf("%d", &vetA[i]);
        printf("Digite o valor do vetor B no indice %d: ", i);
        scanf("%d", &vetB[i]);
        vetC[i]=vetA[i]+vetB[i];
    }

    printf("\nVETOR C: ");

    for (int i=0; i<10; i++)
        printf("%d ", vetC[i]);

    printf("\n");

    return 0;
}
