#include <stdio.h>
#include <stdlib.h>

int main () {

    int vet[10];
    int cont = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do elemento do vetor: ", i + 1);
        scanf("%d", &vet[i]);

        if (vet[i] % 2 == 0)
            cont++;
    }

    printf("O vetor digitado tem %d valores pares\n", cont);

    return 0;
}