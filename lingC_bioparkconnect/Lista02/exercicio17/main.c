#include <stdio.h>
#include <stdlib.h>

int main()
{

    int lanche, quantidade;
    float valor;

    printf("Escolha seu lanche:\n");
    printf("1. Cachorro Quente\n2. Bauru\n3. Misto Quente\n4. Hamburguer\n5. Cheeseburguer\n6. Refrigerante\n");
    printf("Escolha: ");
    scanf("%d", &lanche);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (lanche==1)
    {
        valor=quantidade*11.00;
        printf("O valor a ser pago pelo lanche eh %.2f reais\n", valor);
    }
    else if (lanche==2)
    {
        valor=quantidade*8.50;
        printf("O valor a ser pago pelo lanche eh %.2f reais\n", valor);
    }
    else if (lanche==3)
    {
        valor=quantidade*8.00;
        printf("O valor a ser pago pelo lanche eh %.2f reais\n", valor);
    }
    else if (lanche==4)
    {
        valor=quantidade*9.00;
        printf("O valor a ser pago pelo lanche eh %.2f reais\n", valor);
    }
    else if (lanche==5)
    {
        valor=quantidade*10.00;
        printf("O valor a ser pago pelo lanche eh %.2f reais\n", valor);
    }
    else if (lanche==6)
    {
        valor=quantidade*4.50;
        printf("O valor a ser pago pelo lanche eh %.2f reais\n", valor);
    }
    else
        printf("Digite um numero da lista");

    return 0;
}
