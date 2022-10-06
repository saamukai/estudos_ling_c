/* Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela. */

#include <stdio.h>
#include <stdlib.h> 

void troca_valores(int *n, int *n1) {
    int aux;
    
    if (*n1 > *n){
        aux = *n1;
        *n1 = *n;
        *n = aux;
    }
}

int main () {
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    int *p1 = &a;
    int *p2 = &b;
    
    printf("Valor A: %d\nEndereco A: %d\n", *p1, p1);
    printf("Valor B: %d\nEndereco B: %d\n", *p2, p2);
    troca_valores(p1, p2);
    printf("Maior valor: %d\nEndereco Maior: %d\n", *p1, p1);
    printf("Menor valor: %d\nEndereco Menor: %d\n", *p2, p2);

    return 0;
}