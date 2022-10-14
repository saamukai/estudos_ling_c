/* Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o maior número
primo que é menor ou igual a n. */

#include <stdio.h>
#include <stdlib.h>

int encontraPrimo (int n);

int main () {

    int num;
    printf("Digite um numero para encontrar um primo maior ou igual: ");
    scanf("%d", &num);
    printf("O numero primo maior ou igual a %d eh %d\n", num, encontraPrimo(num));

    return 0;
}

int encontraPrimo (int n) {

    for (int i=2; i <= (n/2); i++)
    {
        if((n%i)!=0) {
            continue;
        }
        else
            n++;
    }

    return n;
}