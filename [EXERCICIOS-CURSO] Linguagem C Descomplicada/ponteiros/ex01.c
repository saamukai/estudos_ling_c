/* screva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 10;
    float b = 15.5;
    char c = 'S';

    int *p = &a;
    float *p1 = &b;
    char *p2 = &c;

    printf("A: %d\nB: %.2f\nC: %c\n", *p, *p1, *p2);
    printf("-----------------------------------\n");

    *p = 11;
    *p1 = 17.6;
    *p2 = 'J';

    printf("A: %d\nB: %.2f\nC: %c\n", *p, *p1, *p2);

    return 0;
}