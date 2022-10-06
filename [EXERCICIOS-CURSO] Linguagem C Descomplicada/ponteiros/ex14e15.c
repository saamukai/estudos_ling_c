/* 14. Crie uma func¸ao que receba dois par ˜ ametros: um array e um valor do mesmo tipo do ˆ
array. A func¸ao dever ˜ a preencher os elementos de array com esse valor. N ´ ao utilize ˜
´ındices para percorrer o array, apenas aritmetica de ponteiros. 
´
15. Crie uma func¸ao que receba como par ˜ ametro um array e o imprima. N ˆ ao utilize ˜ ´ındices
para percorrer o array, apenas aritmetica de ponteiros. */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void imprimeArray(int *vet);
void preencheArray(int *vet, int *n);

int main () {
    int vetor[TAM];
    int elemento = 1;
    
    preencheArray(vetor, &elemento);
    imprimeArray(vetor);

    return 0;
}

void preencheArray(int *vet, int *n) {
    for(int i=0; i< TAM; i++){
        *vet = *n;
        vet++;
    }
}

void imprimeArray(int *vet) {

    printf("VETOR: [ ");
    for(int i=0; i< TAM; i++){
        printf("%d ", *vet);
        vet++;
    }
    printf("]");
}