/*  A multiplicac¸ao de dois n ˜ umeros inteiros pode ser feita atrav ´ es de somas sucessivas. ´
Proponha um algoritmo recursivo Multip Rec(n1,n2) que calcule a multiplicac¸ao de dois ˜
inteiros */

#include <stdio.h>
#include <stdlib.h>

int multip_rec(int n1, int n2) {
    if(n2 == 0)
        return 0;
    else
        return n1 + multip_rec(n1, n2 - 1);
}

int main () {
    int num1, num2;
    printf("Digite 2 numeros para multiplicar: ");
    scanf("%d %d", &num1, &num2);
    printf("O resultado da multiplicacao eh: %d", multip_rec(num1, num2));

    return 0;
}