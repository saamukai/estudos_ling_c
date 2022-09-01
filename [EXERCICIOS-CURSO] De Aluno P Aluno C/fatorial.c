#include <stdio.h>

int main ()
{
    int numUser, fatorial;
    int resultado = 1;

    printf("\n\tFATORIAL");
    printf("\n\nDigite o numero para qual deseja descobrir o fatorial: ");
    scanf("%i", &numUser);

    for (fatorial=1; fatorial<=numUser; fatorial++)
    {
        resultado=resultado*fatorial;
    }
    system("cls");
    printf("\n\n\tO fatorial de %i eh: %i \n", numUser, resultado);

    return 0;
}
