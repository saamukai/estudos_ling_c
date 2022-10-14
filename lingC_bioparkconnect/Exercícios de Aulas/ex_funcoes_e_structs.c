/* Crie um novo tipo de registro para armazenar coordenadas no plano
cartesiano.
- Crie uma fun¸c˜ao para imprimir um ponto do tipo criado.
- Crie uma fun¸c˜ao para cada uma destas opera¸c˜oes: soma de dois
pontos, subtra¸c˜ao de dois pontos, multiplica¸c˜ao por um escalar. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct coordenadas {
    int x, y;
};

void imprimeCoordenadas (struct coordenadas ponto[]);
struct coordenadas somaPontos (struct coordenadas ponto[]);
struct coordenadas subtraiPontos (struct coordenadas ponto[]);
void multEscalar (struct coordenadas ponto[]);

int main () {
    struct coordenadas pontoIn[2];

    for(int i=0; i<2; i++) {
        printf("Digite o valor X do %do ponto: ", i+1);
        scanf("%d", &pontoIn[i].x);
        printf("Digite o valor Y do %do ponto: ", i+1);
        scanf("%d", &pontoIn[i].y);
    }

    imprimeCoordenadas(pontoIn);

    printf("A soma dos dois ponto eh: (%d, %d)\n", somaPontos(pontoIn).x, somaPontos(pontoIn).y);
    printf("A subtracao dos dois ponto eh: (%d, %d)\n", subtraiPontos(pontoIn).x, subtraiPontos(pontoIn).y);

    multEscalar(pontoIn);

}

void imprimeCoordenadas (struct coordenadas ponto[]){
    for(int i=0; i<2; i++){
        printf("As coordenadas do %do ponto: (%d, %d)\n", i+1, ponto[i].x, ponto[i].y);
    }
}

struct coordenadas somaPontos (struct coordenadas ponto[]){
    struct coordenadas soma;

    soma.x = ponto[0].x + ponto[1].x;
    soma.y = ponto[0].y + ponto[1].y;

    return soma;
}

struct coordenadas subtraiPontos (struct coordenadas ponto[]) {
    struct coordenadas subtracao;

    subtracao.x = ponto[0].x - ponto[1].x;
    subtracao.y = ponto[0].y - ponto[1].y;

    return subtracao;
}

void multEscalar (struct coordenadas ponto[]) {
    struct coordenadas multiplicacao[2];
    int numeroEscalar;

    printf("Digite um numero escalar para multiplicar os pontos: ");
    scanf("%d", &numeroEscalar);

    for(int i=0; i<2; i++) {
        multiplicacao[i].x = ponto[i].x * numeroEscalar;
        multiplicacao[i].y = ponto[i].y * numeroEscalar; 
    }

    for(int i=0; i<2; i++) {
        printf("A multiplicao do ponto (%d, %d) pelo numero escalar %d eh o ponto (%d, %d)\n",
                ponto[i].x, ponto[i].y, numeroEscalar, multiplicacao[i].x, multiplicacao[i].y);
    }
}