/* Crie um programa que possui uma funcao que recebe como argumento um vetor de tamanho 5 de tipo estrutura sendo que
essa estrutura deve armezenar um determinado horario no formato hh:mm:ss, peça que o usuario digite 5 horarios divers que deverão ser
armazenados no argumento recebido. Crie uma segunda funcao que recebera este mesmo vetor estrutura mas dessa vez a funcao deverá
apenas ler os valores armazenados no vetor estrutura mostrando  uma mensagem apropriada. */

#include <stdio.h>
#include <stdlib.h>

struct horario
{
    int horas;
    int minutos;
    int segundos;
};

void leHorarios (struct horario lista[5])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("Digite o %i horario (hh:mm:ss): ", i+1);
        scanf("%i:%i:%i", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);
    }

}

void printHorarios(struct horario lista[5])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("o %i horario digitado foi: ", i+1);
        printf("%i:%i:%i\n", lista[i].horas, lista[i].minutos, lista[i].segundos);
    }

}
int main()
{
    struct horario listaHorarios[5];

    leHorarios(listaHorarios);
    printHorarios (listaHorarios);

    return 0;
}
