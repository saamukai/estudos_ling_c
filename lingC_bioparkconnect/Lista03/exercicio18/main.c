#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    float nota, media;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &quantidade);

    for (int i=1; i<=quantidade; i++)
    {
        media=0;
        printf("Digita a primeira nota do %d aluno: ", i);
        scanf("%f", &nota);
        media+=nota;
        printf("Digita a segunda nota do %d aluno: ", i);
        scanf("%f", &nota);
        media+=nota;

        media/=2;
        printf("A media do aluno foi %.2f\n", media);
        if (media>=6)
            printf("Aluno Aprovado\n\n");
        else
            printf("Aluno Reprovado\n\n");
    }

    return 0;
}
