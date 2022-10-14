/*  Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
quantidade de numeros negativos e a soma dos n ´ umeros positivos desse vetor */

#include <stdio.h>
#include <stdlib.h>

int main () {

    float vet[10], somaPositivos=0;
    int quantNegativos=0;

    for (int i=0; i<10; i++)
    {   
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);

        if(vet[i]<0)
            quantNegativos++;
        else
            somaPositivos+=vet[i];
    }

    printf("A quantidade de numeros negativos no vetor: %d\n", quantNegativos);
    printf("A soma dos numeros positivos do vetor: %.2f", somaPositivos);

    return 0;
}