/*  Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica(char *palavra, char *frase);

int main(){
    char string1[]="i get those goosebumps everytime";
    char string2[] = "goosebumps";

    verifica(string2, string1);

    return 0;
}

int verifica(char *palavra, char *frase){

    int cont = 0;

    int tamPalavra = strlen(palavra);
    int tamFrase = strlen(frase);

    if(strlen(palavra)>strlen(frase)){ // se tamanho string 2 for maios que string 1, quer dizer q n está
        printf("A string nao ocorre na primeira\n");
    }
    else { // faz as comparaçoes
        for (int i = 0; i <= tamFrase-tamPalavra; i++) { // se a string 2 estiver no final, vai pegar a primeira letra e continuar comparando
            if(*palavra == *frase){ // se primeira letra da palavra for igual letra na frase
                for (int j = 0; j < tamPalavra; j++){ // faz comparações letra a letra da palavra e frase
                    if(*palavra==*frase) {    // somente se as letras forem iguais
                        cont++;                 // soma no contador
                        palavra++;              // anda "indice" da palavra
                        frase++;                // anda "indice" da frase
                        if(cont==tamPalavra){  // se tem o mesmo tamanho, e andou, significa mesma palavra
                            printf("STRING 2 ENCONTRADA NA STRING 1\n");
                            return 1;
                        }
                    }
                    else {
                        palavra -= cont; // retorna ao inicio da palavra e zera contador
                        cont = 0;
                    }
                }
            }
            frase++;
        }
        printf("STRING 2 NAO ENCONTRADA NA STRING 1\n");
    }
}