//Declarando as bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ftroca(char string[],char caracter ){

    char novaStr[21];
    char invertido[21];

    printf ("\n\n FTroca - string: % s",string);
    printf("\n\n FTroca - Char: % c",caracter);

        for (int i=0;i<=21;i++){
            if(string[i] == 'a'){
                string[i] = caracter;
                continue;
                }
            if(string[i] == 'A'){
                string[i] = caracter;
                continue;
                }
            string[i] = string[i];
    }



    //printf ("\n\n Saida nome convertido: % s",string);
    printf ("\n\n Nome: % s",string);

}
void main(){

    //Declarando as variáveis
    char string[21];
    char caracter;

    // Zerando as variáveis
    string[0] = '/0';
    caracter = '/0';

    // Entradas do usuário
    printf ("Digite um palavra ate 20 caracteres: ");
    gets(string);

    printf ("Digite um caracter :");
    scanf ("%c", &caracter);

    printf ("Main: %s",string);
    ftroca(string,caracter);
}
