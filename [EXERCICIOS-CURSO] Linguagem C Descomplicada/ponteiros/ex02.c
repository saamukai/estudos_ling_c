/* Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b;
    int *p = &a;
    int *p1 = &b;

    printf("Endereco de A: %d\nEndereco de B: %d\n", p, p1);

    if (p > p1)
        printf("Maior endereco eh o A: %x, em int: %d", p,p);
    else
        printf("Maior endereco eh o B: %x, em int: %d", p1,p1);

    return 0;
}