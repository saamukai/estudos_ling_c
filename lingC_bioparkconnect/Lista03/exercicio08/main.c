#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade=0;
    int menorIdade=200;
    char nome[100];
    char nomeMenor[100];

    for (int i=1;i<=10;i++)
    {
        printf("Digite o %d nome: ", i);
        scanf("%s", nome);
        printf("Digite a %d idade: ", i);
        scanf("%d", &idade);

        if (idade<menorIdade)
        {
            menorIdade=idade;

            for(int k=0; k<100; k++)
            {
                nomeMenor[k]=0;
            }
            for (int j = 0; nome[j] != '\0'; j++)
            {
                nomeMenor[j]=nome[j];
            }
        }
    }

    printf("\n\t'%s' eh o nome da pessoa mais nova\n", nomeMenor);

    return 0;
}
