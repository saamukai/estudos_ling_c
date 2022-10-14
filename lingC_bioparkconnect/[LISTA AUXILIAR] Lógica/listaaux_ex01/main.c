/* Escreva uma funcao que computa a potencia a^b para valores a (double) e b (int) passados por par�metro
(nao use bibliotecas como math.h). Use a funcao anterior e crie um programa que imprima todas
as potencias: 2^0, 2^1, ..., 2^10, 3^0, ..., 3^10, ..., 10^10. */

#include <stdio.h>
#include <stdlib.h>

double potencia(double a, int b);
void imprimePotencias();

int main()
{
    double base;
    int expoente;

    // CALCULA POTENCIA FORNECIDA PELO USU�RIO
    /* do {
    printf("Digite um valor para a base: ");
    scanf("%lf", &base);

    if (base < 2)
        printf("Digite um valor igual ou maior que 2\n");
    } while (base < 2);

    do {
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if ((expoente<0) || (expoente>10))
        printf("Digite um expoente entre 0 e 10\n");
    } while ((expoente<0) || (expoente>10));

    printf("O valor da potencia eh: %.2lf\n\n", potencia(base,expoente));  */

    // IMPRIME TABELA DE POTENCIAS DE 2 A 10;
    imprimePotencias();

    return 0;
}

void imprimePotencias()
{
    for(double i=2; i<=10; i++)
    {
        for(int j=0; j<=10; j++)
        {
            printf("%.lf elevado a %d = %.lf\n", i, j, potencia(i,j));
        }
        printf("\n");
    }
}

double potencia(double a, int b)
{
    double aux=1;
    aux=a;

    if (b==0)
        return 1;

    for (int i=0; i<(b-1); i++)
    {
        a*=aux;
    }

    return a;
}
