/* Fac¸a um programa que leia dez conjuntos de dois valores, o primeiro representando o
numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno ´
mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente ´
com suas alturas. */

#include <stdio.h>
#include <stdlib.h>

int main () {

    float alunos[10][2];
    float maior[2], menor[2]; // vetor com duas posições onde a pos 0 representa o numero do aluno e a 1, sua altura

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<2; j++)
        {
            if (j==0) {
            printf("Digite o numero do %do aluno: ", i+1);
            scanf("%f", &alunos[i][j]);
            }
            else {
                printf("Digite o a altura do %do aluno: ", i+1);
                scanf("%f", &alunos[i][j]);

                if (i==0) {  // salva a altura e numero do primeiro aluno na var menor e na var maior
                    maior[0] = alunos[i][0];
                    maior[1] = alunos[i][1];
                    menor[0] = alunos[i][0];
                    menor[1] = alunos[i][1];
                }

                if (alunos[i][1]>maior[1]) {
                    maior[0] = alunos[i][0]; // salva o numero do aluno maior
                    maior[1] = alunos[i][1]; // salva a altura do aluno menor
                }
                else if (alunos[i][1]<menor[1]) {  // idem, caso menor
                    menor[0] = alunos[i][0];
                    menor[1] = alunos[i][1];
                }
            }
        }
    }

    printf("A altura do maior aluno eh %.2f metros e numero %.0f\n", maior[1], maior[0]);
    printf("A altura do menor aluno eh %.2f metros e numero %.0f\n", menor[1], menor[0]);

    return 0;
}

