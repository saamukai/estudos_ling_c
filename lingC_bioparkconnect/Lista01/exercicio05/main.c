/* Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorLitro=0, pagamento=0;

    printf("\nDigite qual o valor da gasolina atualmente (ex: 6.85): ");
    scanf("%f", &valorLitro);
    printf("\nDigite qual valor em reais deseja colocar (ex: 30.00): ");
    scanf("%f", &pagamento);
    printf("\n\nVoce vai conseguir colocar %.2f litros de gasolina.\n", (pagamento/valorLitro));

    return 0;
}
