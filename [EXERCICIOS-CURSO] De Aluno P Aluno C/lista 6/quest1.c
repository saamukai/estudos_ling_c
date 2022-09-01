#include <stdio.h>

int main()
{
    int a = 1;
    float b = 2.50;
    char c = 'c';
    int at = sizeof(a);
    int bt = sizeof(b);
    int ct = sizeof(c);

    printf("CONTEUDO DE A: %i, TAMANHO DE A em bytes: %i, ENDEREÇO DE A: %x\n\n", a, at, &a);
    printf("CONTEUDO DE B: %.2f, TAMANHO DE A em bytes: %i, ENDEREÇO DE A: %x\n\n", b, bt, &b);
    printf("CONTEUDO DE C: %c, TAMANHO DE A em bytes: %i, ENDEREÇO DE A: %x\n\n", c, ct, &c);

    return 0;
}
