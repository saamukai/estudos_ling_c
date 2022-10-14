/* Pec¸a ao usuario para digitar dez valores num ´ ericos e ordene por ordem crescente esses ´
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem. */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main (){
    int vet[TAM];

    for (int i = 0; i < TAM; i++){
        printf("Digite o %do valor para o vetor: ", i + 1);
        scanf("%d", &vet[i]);
        if (i>0) {
            for (int j = 0; j < i; j++){
                if (vet[i] < vet[j]) {
                    int aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }
    }

    printf("Vetor Ordenado: [ ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    printf("]");
}