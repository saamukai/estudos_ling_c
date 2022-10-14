/* Escreva uma função que recebe um número ponto flutuante n passado por parâmetro e devolve a raiz
quadrada de n. */

#include <stdio.h>
#include <stdlib.h>

float raizQuadrada (float n);

int main () {

    float num;
    printf("Digite um numero (ponto flutuante com ate 4 casas decimais) para encontrar a raiz quadrada: ");
    scanf("%f", &num);
    printf("a raiz quadrade de %.4f eh igual/aproximadamente %.4f\n", num, raizQuadrada(num));

    return 0;
}

float raizQuadrada (float n) {
    float cont=0, aux=0, raiz=0;

    while(aux<=n) {
        cont+=0.0001;
        aux=cont*cont;
    }
    raiz = cont - 0.0001;

    return raiz;
}
