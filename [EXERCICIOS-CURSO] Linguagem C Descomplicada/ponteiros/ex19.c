/*  Escreva uma func¸ao que aceita como par ˜ ametro um array de inteiros com N valores, e ˆ
determina o maior elemento do array e o numero de vezes que este elemento ocorreu ´
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a func¸ao deve retorna para o programa que a chamou o valor 15 e o n ˜ umero 3 ´
(indicando que o numero 15 ocorreu 3 vezes). A func¸ ´ ao deve ser do tipo ˜ void. */

#include <stdio.h>
#include <stdlib.h>

void contaMaior (int *vet, int n); 

int main () {
    int vetor[] = {1, 20, 4, 7, 20, 8, 10, 7, 20, 7};
    int tam = sizeof(vetor)/sizeof(int);
    
    contaMaior(vetor, tam);

    return 0;
}

void contaMaior (int *vet, int n){
    int maior = *vet;
    int cont = 0;

    for(int i=0; i<n; i++){
        if(*vet>maior){
            maior = *vet;
        }
        vet++;
    }
    printf("O maior elemento eh: %d\n", maior);
    vet -= n;

    for (int i=0; i<n; i++){
        if(*vet == maior){
            cont++;
        }
        vet++;
    }
    printf("Ele aparece na array %d vezes\n", cont);
}