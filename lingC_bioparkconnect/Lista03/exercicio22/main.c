#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total=0, quilometragem=0;

    do {
        printf("Digite a quilometragem percorrida: ");
        scanf("%f", &quilometragem);
        total+=quilometragem;

    } while (total<=4000);

    printf("Voce ja atingiu os 4000 quiloemtros\n");

    return 0;
}
