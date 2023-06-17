#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
    char frase[100];
    char letraInformada;

    printf("Digite uma frase: ");
    //fflush(stdin);
    gets(frase);

    printf("Digite a letra que deseja saber a ocorrencia: ");
    scanf(" %c", &letraInformada);

    int tamanhoFrase = strlen(frase);
    int i = 0;
    int vetor[tamanhoFrase];
   
    for (i = 0; i <= tamanhoFrase; i++){
        char letraN = frase[i];
        vetor[i] = i;

        if (vetor[i] < 1){
        printf("Indices onde ocorrem o caractere %c: ", letraInformada);
        }

        if (tolower(letraN) == tolower(letraInformada)){
            printf("%i ", vetor[i]);
        }
    }

}