/**Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par
ordenado (x,y) **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1=0, x2=0, y1=0, y2=0;

    printf("Digite o primeiro ponto no modelo (x,y): ");
    scanf("%f,%f", &x1, &y1);
    printf("Digite o segundo ponto no modelo (x,y): ");
    scanf("%f,%f", &x2, &y2);

    float distancia = sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
    printf("\nA distancia entre esses dois pontos eh de: %f\n", distancia);

    return 0;
}
