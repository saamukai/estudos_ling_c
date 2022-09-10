/* Fac¸a uma func¸ao recursiva que receba um n ˜ umero inteiro positivo par N e imprima todos ´
os numeros pares de 0 at ´ e N em ordem crescente.  */

int escreve_naturais (int n) {
    if (n==-2)
        return 0;
    else {
        printf("%d ", escreve_naturais(n - 2));
        return n+2;
    }
}

int main () {

    int num;
    printf("Digite um numero par: ");
    scanf("%d", &num);
    printf("Os numeros naturais pares de zero ate o numero digitado: ");
    escreve_naturais(num);

    return 0;
}