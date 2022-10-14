/** Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para
ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não paguem centavos.
Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe. **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float contaTotal=0, pagaFelipe=0;
    int pagaCeA=0;

    printf("Digite o valor da conta: ");
    scanf("%f", &contaTotal);

    pagaCeA = contaTotal/3;

    pagaFelipe = contaTotal-(pagaCeA*2);

    printf("\nAndre e Carlos deverao pagar %.2f $, e Andre pagara %.2f $\n", (float)pagaCeA, pagaFelipe);

    return 0;
}
