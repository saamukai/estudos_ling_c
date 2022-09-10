/* Fac¸a uma func¸ao recursiva que receba um n ˜ umero inteiro positivo N e imprima todos os ´
numeros naturais de 0 at ´ e N em ordem decrescente */

#include <stdio.h>
#include <stdlib.h>

int escreve_naturais (int n) {
    if (n==-1)
        return 0;
    else {
        printf("%d ", n);
        return escreve_naturais(n - 1);
    }
}

int main () {

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Os numeros naturais de zero ate o numero digitado: ");
    escreve_naturais(num);

    return 0;
}
