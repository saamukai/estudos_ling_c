/* Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
após a retirada dos nulos e negativos. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorD[10];

    for(int i=0; i<10; i++)
    {
        printf("Digite o %do numero para o vetor: ", i+1);
        scanf("%d", &vetorD[i]);
    }

    printf("O vetor digitado com numeros nao nulos e positivos: [ ");
    for(int i=0; i<10; i++)
    {
        if(vetorD[i]>0)
        {
            printf("%d ", vetorD[i]);
        }
    }
    printf("]\n");

    return 0;
}
