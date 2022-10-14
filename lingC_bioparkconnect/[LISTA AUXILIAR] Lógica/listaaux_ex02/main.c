/* Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. OBS:
Caso n ≤ 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os
valores de n! para n = 1, . . . , 20. */

#include <stdio.h>
#include <stdlib.h>

double calculaFatorial (int n){

    double fatorial;

    if (n <= 1)
        return 1;
    else
    {
        fatorial = n * calculaFatorial(n-1);
        return fatorial;
    }
}

int main () {

    int num=0;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);
    printf("Fatorial: %.0lf\n", calculaFatorial(num));

    return 0;
}