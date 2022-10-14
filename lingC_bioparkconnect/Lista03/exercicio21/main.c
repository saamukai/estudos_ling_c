#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int mesaFumantes=25;
    int mesaNaoFumantes=25;
    int total=mesaNaoFumantes+mesaFumantes;
    char mesa[30];

    printf("Digite a mesa que deseja reservar\n");
    printf("Digite 'fumante' se deseja reservar mesa na area de fumantes\n");
    printf("Digite 'nao' se deseja reservar mesa na area de nao fumantes\n\n");

    int contaMesa=1;
    do {
        printf("Digite a area da %d mesa: ", contaMesa);
        scanf("%s", mesa);

        if ((strcmp(mesa, "fumante"))==0)
        {
            mesaFumantes--;
            total=mesaNaoFumantes+mesaFumantes;
            printf("Mesa reservada na area de fumantes\n");
            contaMesa++;
        }

        else if ((strcmp(mesa, "nao"))==0)
        {
            mesaNaoFumantes--;
            total=mesaNaoFumantes+mesaFumantes;
            printf("Mesa reservada na area de nao fumantes\n");
            contaMesa++;
        }

        else
        {
            printf("Digite conforme a instrucao\n");
            printf("Mesa nao reservada\n");
        }

        printf("\nExistem um total de %d mesas disponiveis\n", total);
        printf("Existem %d mesas disponiveis na area de fumantes\n", mesaFumantes);
        printf("Existem %d mesas disponiveis na area de nao fumantes\n", mesaNaoFumantes);

    } while (total!=0);

    printf("\nNao ha mais mesas disponiveis\n");

    return 0;
}
