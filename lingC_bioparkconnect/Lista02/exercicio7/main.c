#include <stdio.h>
#include <stdlib.h>

int main()
{
    char genero;
    float altura, pesoIdeal;

    printf("Digite o genero\nEscolha M para Masculino ou F para Feminino: ");
    scanf("%c", &genero);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    if ((genero == 'M') || (genero=='m'))
    {
        pesoIdeal=(72.7 * altura)-58;
        printf("O peso ideal eh: %.2f\n",pesoIdeal);
    }
    else
    {
        pesoIdeal=(62.1 * altura)-44.7;
        printf("O peso ideal eh: %.2f\n",pesoIdeal);
    }

    return 0;
}
