/*  Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B */

#include <stdio.h>
#include <stdlib.h>

int soma_dobro(int *p, int *p2);

int main () {

    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("A soma do dobro dos dois numeros: %d\n", soma_dobro(&a, &b));
    printf("O dobro de A: %d\n", a);
    printf("O dobro de B: %d\n", b);

    return 0;
}

int soma_dobro(int *p, int *p2){
    *p = 2 * (*p);
    *p2 = 2 * (*p2);

    return *p + *p2;
}