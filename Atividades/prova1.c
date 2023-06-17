#include<stdio.h>
#include<string.h>
#include<ctype.h>

//----------------------funcao Troca e Inverte-------------

void fTroca(char palavra[], char caracter){

    int tamanho = strlen(palavra);

    int i;
    for (i = 0; i < tamanho; i++){
        char letra = palavra[i];
        int A = (tolower(letra) == 'a');

        if (A){
            palavra[i] = caracter;
        }
    }

    palavra[i] = '\0';

    char palavraInvertida[tamanho];
    int j;
    int k = tamanho - 1;

    for (j = 0; j < tamanho; j++){
        palavraInvertida[j] = palavra[k];
        k--;
    }

    palavraInvertida[j] = '\0';

    printf("%s", palavraInvertida);

}

//------------------------------principal--------------------------

int main(){

    char palavra[50];
    char caracter;

    printf("Digite a palavra de ate 49 letras: ");
    scanf("%s", palavra);

    printf("Digite o caracter que substituira a letra A: ");
    scanf(" %c", &caracter);

    fTroca(palavra, caracter);

    printf("\n\nPrograma finalizado...\n");
}
