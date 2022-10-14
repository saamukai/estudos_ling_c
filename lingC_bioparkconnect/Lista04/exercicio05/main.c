/* Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[10];
    int somaMenor15=0, somaMaior15=0, contaMaior15=0, contaIgual15=0;

    for(int i=0; i<10; i++)
    {
        printf("Digite o valor do vetor 1 no indice %d: ", i);
        scanf("%d", &vetorA[i]);

        if(vetorA[i]<15)
            somaMenor15+=vetorA[i];
        else if(vetorA[i]==15)
            contaIgual15++;
        else
        {
            somaMaior15+=vetorA[i];
            contaMaior15++;
        }
    }

    printf("\nA soma de elementos armazenados neste vetor que sao inferiores a 15: %d\n", somaMenor15);
    printf("A quantidade de elementos armazenados no vetor que sao iguais a 15: %d\n", contaIgual15);
    printf("A media dos elementos armazenados no vetor que sao superiores a 15: %.2f\n", (float)somaMaior15/contaMaior15);

    return 0;
}
