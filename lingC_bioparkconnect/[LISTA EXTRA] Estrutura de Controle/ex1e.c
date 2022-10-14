/* )Dado um dígito, escrever o mesmo em código Morse. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n = 0;

    printf("digite o numero n: ");
    scanf("%d", &n);

    switch (n) {
        case 0:
            printf("_ _ _ _ _");
            break;
        case 1: 
            printf(". _ _ _ _");
        break;
        case 2: 
            printf(". . _ _ _");
        break;
        case 3: 
            printf(". . . _ _");
        break;
        case 4: 
            printf(". . . . _");
        break;
        case 5: 
            printf(". . . . .");
        break;
        case 6: 
            printf("_ . . . .");
        break;
        case 7: 
            printf("_ _ . . .");
        break;
        case 8: 
            printf("_ _ _ . .");
        break;
        case 9: 
            printf("_ _ _ _ .");
        break;
        default:
            printf("Digite um numero com somente um digito!\n");
            break;
    }

    return 0;
}