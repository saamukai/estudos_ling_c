/* Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro
número da série de fibonacci que é maior ou igual a n */

#include <stdio.h>
#include <stdlib.h>

int encontraFibo (int n){

    int fibo=0, resFiboAnterior = 1, aux = 0;

    while (fibo <= n) { 
        fibo = aux + resFiboAnterior; 
        aux = resFiboAnterior; 
        resFiboAnterior = fibo;
    }

    return fibo;
}

int main () {

    int num=0;

    printf("Digite um numero para encontra o prox fibonacci: ");
    scanf("%d", &num);
    printf("Fibo: %d\n", encontraFibo(num));

    return 0;
}