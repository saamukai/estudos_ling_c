/* Fac¸a um programa que leia tres valores inteiros e chame uma func¸ ˆ ao que receba estes 3 ˜
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
o segundo menor valor na variavel do meio, e o maior valor na ´ ultima vari ´ avel. A func¸ ´ ao˜
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela. */

#include <stdio.h>
#include <stdlib.h>

int ordena(int *p, int *p1, int *p2);

int main () {
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if(ordena(&a, &b, &c) == 1) {
        printf("Valor de retorno %d\n", ordena(&a, &b, &c));
        printf("Valores ordenados: %d, %d e %d", a, b, c);
    }
    else
        printf("Valores todos iguais. Valor de Retorno: %d", ordena(&a, &b, &c));


    return 0;
}

int ordena(int *p, int *p1, int *p2){
    if ((*p == *p1) && (*p == *p2))
        return 0;
    else {
        if ((*p > *p1) && (*p < *p2)){
            int aux = *p1;
            *p1 = *p;
            *p = aux;
        }
        else if ((*p < *p1) && (*p > *p2)) {
            int aux = *p2;
            *p2 = *p;
            *p = aux;
        }
        else if ((*p == *p1) && (*p > *p2)) {
            int aux = *p2;
            *p2 = *p;
            *p = aux;
        }
        return 1;
    }
}