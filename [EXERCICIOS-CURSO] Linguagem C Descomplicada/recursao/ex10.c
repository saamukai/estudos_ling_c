/* Fac¸a uma func¸ao recursiva que receba um n ˜ umero inteiro positivo par N e imprima todos ´
os numeros pares de 0 at ´ e N em ordem decrescente. */

#include <stdio.h>
#include <stdlib.h>

int escreve_naturais (int n) {
    if (n==-2)
        return 0;
    else {
        if()
        printf("%d ", n+2);
        return escreve_naturais(n - 2);
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
