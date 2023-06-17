#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
    //maior palavra da lingua portuguesa é: pneumoultramicroscopicossilicovulcanoconiótico, com 46 letras
    char palavra[47];
    char substituta;

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    printf("Digite a letra que ira substituir as vogais: ");
    scanf(" %c", &substituta);

    int tamanhoPalavra = strlen(palavra);
    int vogais = 0;
    int i = 0;
   
    for (i = 0; i <= tamanhoPalavra; i++){
        char letra = palavra[i];
        int vogal = (tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) =='i' || tolower(letra) =='o'  || tolower(letra) =='u');
        //Usa-se aspas simples para caracter e aspas duplas para string

        if (vogal){
            vogais++;
            printf("%c", substituta);
        }
        else {
            printf("%c", letra);
        }
    }

    printf("\nA quantidade de vogais eh: %i\n", vogais);
}
