//  Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as
// notas tem pesos respectivos de 1, 2 e 3).

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1=0, nota2=0, nota3=0, media=0;

    printf("Digite as 3 notas do aluno separadas por espaco: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media=((((nota1)*1)+((nota2)*2)+((nota3)*3))/6);
    printf("\nA media desse aluno eh: %.2f\n", media);

    return 0;
}
