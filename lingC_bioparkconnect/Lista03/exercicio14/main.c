#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char resposta[4];

    do {
        printf("Ola, tudo bem?\n");
        printf("Responda: ");
        scanf("%s", resposta);
        printf("\n");

    } while ((strcmp(resposta, "nao"))==0);

    return 0;
}
