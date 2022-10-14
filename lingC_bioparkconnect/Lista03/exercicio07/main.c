#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int maiores=0;

    for (int i=1; i<=20; i++)
    {
        printf("Digite a %d idade: ",i);
        scanf("%d", &idade);
        if (idade>=18)
            maiores++;
    }

    printf("A quantidade de pessoas maiores de idade digitadas eh: %d pessoas\n", maiores);

    return 0;
}
