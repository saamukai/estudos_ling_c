/** . Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x
DEZENA = x
UNIDADE = x **/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero=0, centenas=0, dezenas=0, unidades=0;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("\nO numero digitado foi %d", numero);

    centenas = numero/100;
    numero -= centenas*100;
    dezenas = numero/10;
    numero -= dezenas*10;
    unidades = numero;

    printf("\nO numero digitado tem %d centenas, %d dezenas e %d unidades\n", centenas, dezenas, unidades);

    return 0;
}
