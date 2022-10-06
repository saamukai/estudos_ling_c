/*  Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int v[] = {1, 2, 3, 4, 5};
    int *p = v;

    for (int i = 0; i < sizeof(v)/sizeof(int); i++){
        printf("%d\n", p[i]*2);
    }

        return 0;
}