#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo, credito;

    printf("Digite o saldo medio de um cliente: ");
    scanf("%f", &saldo);

    if ((saldo>=0)&&(saldo<=200))
    {
        printf("O saldo medio do cliente foi menor que 200 reais\n");
        printf("O cliente nao recebera nenhum credito\n");
    }
    else if((saldo>=201)&&(saldo<=400))
    {
        credito=saldo*0.2;
        printf("O saldo medio do cliente foi entre 201 e 400 reais\n");
        printf("O cliente recebera um credito de 20%%\n");
        printf("O credito que o cliente recebera eh: %.2f\n", credito);
    }

    else if((saldo>=401)&&(saldo<=600))
    {
        credito=saldo*0.3;
        printf("O saldo medio do cliente foi entre 401 e 600 reais\n");
        printf("O cliente recebera um credito de 30%%\n");
        printf("O credito que o cliente recebera eh: %.2f\n", credito);
    }

    else if(saldo>=601)
    {
        credito=saldo*0.4;
        printf("O saldo medio do cliente foi maior que 600 reais\n");
        printf("O cliente recebera um credito de 40%%\n");
        printf("O credito que o cliente recebera eh: %.2f\n", credito);
    }
    else
        printf("Digite um valor positivo\n");

    return 0;
}
