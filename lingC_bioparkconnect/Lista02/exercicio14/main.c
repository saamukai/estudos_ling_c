#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float tabela, imposto;

    printf("Digite o ano do carro: ");
    scanf("%d", &ano);
    printf("Digite o valor de tabela do carro: ");
    scanf("%f", &tabela);

    if (ano<1990)
    {
        imposto=tabela*0.01;
        printf("O imposto a ser pago eh: %.2f reais", imposto);
    }

    else
    {
        imposto=tabela*0.015;
        printf("O imposto a ser pago eh %.2f reais", imposto);
    }

    return 0;
}
