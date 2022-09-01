#include <stdio.h>

int main ()
{
    int numint, invertido, aux = 0;

    printf("\n\n\tINVERSOR DE NUMEROS BASICO");
    printf("\nDigite um numero para inverter: ");
    scanf("%i", &numint);

    if (numint>=0)
    {
        printf("\nO numero invertido eh: ");
        do
        {
            invertido=numint%10;
            printf("%i", invertido);
            numint/=10;
        } while (numint!=0);
        printf("\n\n");
    }
    else
    {
        numint = numint*(-1);
        printf("\nO numero invertido eh: -");
        do
        {
            invertido=numint%10;
            printf("%i", invertido);
            numint/=10;
        } while (numint!=0);
        printf("\n\n");
    }

    return 0;
}
