/* Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor. */

#include <stdio.h>
#include <stdlib.h>

int main () {

    float maior=0, menor=0, vet[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do elemento do vetor: ", i + 1);
        scanf("%f", &vet[i]);
        
        if(i==0) {
            maior = vet[i];
            menor = vet[i];
        }

        if (vet[i]>maior)
            maior = vet[i];
        else if (vet[i] < menor)
            menor = vet[i];
    }

    printf("O maior elemento do vetor: %.2f\n", maior);
    printf("O menor elemento do vetor: %.2f\n", menor);

    return 0;
}