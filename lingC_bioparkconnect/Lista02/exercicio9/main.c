#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idAluno;
    float notas[3];
    float soma, media;
    printf("Digite o numero de identificacao do aluno: ");
    scanf("%d", &idAluno);

    for (int i=0; i<=2; i++)
    {
        printf("Digite a nota %i do aluno: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma/3;
    printf("\nA media do aluno id %d eh: %.2f",idAluno, media);

    if (media>=4 && media<7)
        printf("\nAluno DE RECUPERACAO\n");
    else if (media>=7)
        printf("\nAluno APROVADO\n");
    else
        printf("\nAluno REPROVADO\n");

    return 0;
}
