#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int total, gatos=0, cachorros=0;
    char especie[100];

    printf("Digite a quantidade de animais: ");
    scanf("%d", &total);
    printf("Digite a especie do animal\nDigite 'gato' se for gato\n");
    printf("Digite 'cachorro' se for cachorro\n");

    for (int i=1; i<=total; i++)
    {
        printf("Digite a especie do %d animal: ", i);
        scanf("%s", especie);

        if ((strcmp(especie, "cachorro"))==0)
            cachorros++;
        else if ((strcmp(especie, "gato"))==0)
            gatos++;
        else
        {
            printf("Digite conforme a instrucao\n");
            i--;
        }

    }

    printf("Existem %d gatos\n", gatos);
    printf("Existem %d cachorros\n", cachorros);

    return 0;
}
