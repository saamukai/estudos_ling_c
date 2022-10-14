/* Fac¸a um programa para ler 10 numeros DIFERENTES a serem armazenados em um ´
vetor. Os dados deverao ser armazenados no vetor na ordem que forem sendo lidos, ˜
sendo que caso o usuario digite um n ´ umero que j ´ a foi digitado anteriormente, o programa ´
devera pedir para ele digitar outro n ´ umero. Note que cada valor digitado pelo usu ´ ario ´
deve ser pesquisado no vetor, verificando se ele existe */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main () {
    int vet[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vet[i]);
        if (i>0) {
            for (int j = 0; j < i; j++) {
                if (vet[j]==vet[i]) {
                    printf("Esse numero ja foi digitado, digite outro\n");
                    i--;
                    break;
                }
            }
        }
    }

    printf("Vetor Digitado: [ ");
    for (int i = 0;i<TAM; i++){
        printf("%d ", vet[i]);
    }
    printf("]");

    return 0;
}