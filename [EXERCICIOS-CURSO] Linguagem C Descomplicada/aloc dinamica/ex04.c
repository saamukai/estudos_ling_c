/* 4. Fac¸a um programa que receba do usuario o tamanho de uma string e chame uma ´
func¸ao para alocar dinamicamente essa string. Em seguida, o usu ˜ ario dever ´ a informar o ´
conteudo dessa string. O programa imprime a string sem suas vogais */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aloca(char **string, int n);
char* aloca2(int n);

int main () {
    int tamStr;
    char *frase;
    printf("Digite o tamanho da string: ");
    scanf("%d", &tamStr);

    // aloca(&frase, tamStr);
    frase = aloca2(tamStr);

    printf("Digite a string: ");
    fflush(stdin);
    scanf("%[^\n]", frase);
    
    printf("String Digitada: ");
    for (int i = 0; i < strlen(frase); i++){
        printf("%c", *(frase + i) );
        
    }

        return 0;
}

void aloca(char **string, int n){
    *string = (char *)malloc(n * sizeof(char) );
}

char* aloca2(int n) {
    return malloc(n * sizeof(char) );
}