#include<stdio.h>
#include<string.h>

int const MAX = 51; //constante

void descriptografa (char caracter[MAX], int chaveCezar){
    int const ALFABETO = 26; //numero de letras do alfabeto
    int j;
    char letra;
    int tamanho = strlen(caracter);

    printf ("Palavra descriptografada: ");
    for (j = 0; j < tamanho; j++){

        letra = caracter[j] - chaveCezar;

        if (letra < 'A'){
            letra += ALFABETO;
        }

        printf("%c", letra);
    }

    printf("\n");
}


int main (){

    int linhas; //numero de testes
    char palavra[MAX]; //palavra criptografada
    int chave; //chave para descriptografar a palavra. Deslocamento de cada caracter.

    printf("Insira a quantidade de palavras: ");
    scanf("%i", &linhas);

    for (int i = 0; i < linhas; i++){
        printf("Insira a palavra que deseja descriptografar: ");
        scanf("%s", palavra);

        printf("Insira a chave de Cezar: ");
        scanf("%i", &chave);

        descriptografa (palavra, chave);
    }

}
