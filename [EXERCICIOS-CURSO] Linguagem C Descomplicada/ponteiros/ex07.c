/* Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal. */

#include <stdio.h>
#include <stdlib.h>

int soma(int *n, int n2);

int main () {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    soma(&a, b);
    printf("A soma dos dois valores: %d", a);

    return 0;
}

int soma (int *n, int n2) {

    *n = *n + n2;
}