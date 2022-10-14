/* Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
programa que determine e escreva a menor e a maior idades e suas respectivas posições. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[10];
    int menorIdade=0, maiorIdade=0, posMenor=0, posMaior=0;

    for(int i=0; i<10; i++)
    {
        printf("Digite a %da idade: ", i+1);
        scanf("%d", &vetorA[i]);

        if (i==0)
        {
            menorIdade=vetorA[i];
            maiorIdade=vetorA[i];
        }
        if (vetorA[i]>maiorIdade)
        {
            maiorIdade=vetorA[i];
            posMaior=i;
        }
        else if (vetorA[i]<menorIdade)
        {
            menorIdade=vetorA[i];
            posMenor=i;
        }
    }

    printf("\nA maior idade do grupo eh %d e sua posicao no vetor eh %d (%da idade)\n", maiorIdade, posMaior, posMaior+1);
    printf("A menor idade do grupo eh %d e sua posicao no vetor eh %d (%da idade)\n", menorIdade, posMenor, posMenor+1);


    return 0;
}
