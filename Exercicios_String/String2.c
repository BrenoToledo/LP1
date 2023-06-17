#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
    //maior palavra da lingua portuguesa é: pneumoultramicroscopicossilicovulcanoconiótico, com 46 letras
    char palavra[47];
    char letraInformada;

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    printf("Digite a letra que deseja saber a quantidade: ");
    scanf(" %c", &letraInformada);

    int tamanhoPalavra = strlen(palavra);
    int nLetras = 0;
    int i = 0;
   
    for (i = 0; i <= tamanhoPalavra; i++){
        char letraN = palavra[i];

        if (tolower(letraN) == tolower(letraInformada))
            nLetras++;
    }

    printf("\nA quantidade de letras %c eh: %i\n", letraInformada, nLetras);
}