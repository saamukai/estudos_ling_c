/* Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Endereco de A: %d\nEndereco de B: %d\n", p1, p2);
    printf("Valor de A: %d\nValor de B: %d\n", *p1, *p2);

    if (p1 > p2)
        printf("Maior endereco eh o A: %x\nValor de A: %d", p1,*p1);
    else
        printf("Maior endereco eh o B: %x\nValor de B: %d", p2,*p2);

    return 0;
}