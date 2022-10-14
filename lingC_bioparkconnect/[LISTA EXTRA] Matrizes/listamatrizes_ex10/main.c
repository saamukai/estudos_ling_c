/* Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral. */

#include <stdio.h>
#include <stdlib.h>

int main () {

    float nota[15], soma = 0;
    float media = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite a nota do %do aluno: ", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

    media = soma / (sizeof(nota) / sizeof(int));
    printf("A media geral dos alunos eh %.2f\n", media);
}