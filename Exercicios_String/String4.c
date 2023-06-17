#include<stdio.h>
#include<string.h>

int main (void){

    //char strOrigem[50], strDestino[50];
    char strOrigem[50];
    int posicaoInicial, posicaoFinal;

    printf("Palavra de origem: ");

    fflush(stdin);
    gets(strOrigem);

    printf("Posicao inicial: ");
    scanf("%i", &posicaoInicial);

    printf("Posicao final: ");
    scanf("%i", &posicaoFinal);

    int tamanho = posicaoFinal - posicaoInicial + 1;
    //char strIntermed[tamanho];
    char strDestino[tamanho];

    int i, j = 0;

    for (i = posicaoInicial; i <= posicaoFinal; i++){
        strDestino[j] = strOrigem[i];
        j++;
    }

    //strncpy(strDestino, strIntermed, tamanho);
    strDestino[j] = '\0';

    printf("%s\n", strDestino);
    
}