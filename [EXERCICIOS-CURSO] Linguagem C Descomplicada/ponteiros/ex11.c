/* Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares. */
#include <stdio.h>
#include <stdlib.h> 

int main () {
    int tam = 5;
    int v[tam];
    int *p = v;

    for (int i = 0; i < tam; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("TODOS ENDERECOS: [ ");
    for (int i = 0; i < tam; i++){
            printf("%d ", &p[i]);
    }
    printf("]\n");

    printf("ENDERECO DAS POS PARES: [ ");
    for (int i = 0; i < tam; i++){
        if(i%2==0)
            printf("%d ", &p[i]);
    }
    printf("]\n");

    return 0;
}