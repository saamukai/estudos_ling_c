/* Considere a seguinte declarac¸ao: int A, *B, **C, ***D; Escreva um programa que leia a ˜
variavel a e calcule e exiba o dobro, o triplo e o qu ´ adruplo desse valor utilizando apenas ´
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo.  */

#include <stdio.h>
#include <stdlib.h> 

int main () {
    int a, *b, **c, ***d;

    printf("Digite um valor: ");
    scanf("%d", &a);

    b = &a;

    *b *= 2;
    printf("O dobro de a: %d\n", *b);

    **c = *b + (*b/2);
    printf("O triplo de a: %d\n", **c);

    ***d = *(*c) + *(*c)/3;
    printf("O quadruplo de a: %d\n", ***d);

    return 0;
}