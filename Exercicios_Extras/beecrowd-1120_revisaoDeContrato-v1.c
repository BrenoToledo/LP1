#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeDigito(char texto1[]) {
    int tamanho = strlen(texto1) - 2;
    char defeito = texto1[0];
    char texto2[tamanho];
    int i;
    int j = 0;

    for (i = 2; i <= tamanho; i++) {
        if (texto1[i] != defeito) {
           texto2[j] = texto1[i];
           j++;
        }
    }

    texto2[j] = '\0';

    if (texto2[0] == '\0' || strcmp(texto2, "0") == 0) {
        printf("Valor corrigido: 0\n");
    } else {
        if (texto2[0] != '0') {
            printf("Valor corrigido: %s\n", texto2);
        } else {
            int posicao = 0;
            while (texto2[posicao] == '0' || texto2[posicao] == '\0') {
                posicao++;
            }
            int novoTamanho = strlen(texto2) + 1;
            char saida[novoTamanho];
            int k = 0;
            for (i = posicao; i < j; i++) {
                saida[k] = texto2[i];
                k++;
            }
            saida[k] = '\0';
            
            if (strcmp(saida, "") == 0) {
            printf("Valor corrigido: 0\n");}
            
            else{
            printf("Valor corrigido: %s\n", saida);} 
            
        }
    }
}

int main(void) {
    char entrada[103];
    char fim[5] = "0 0\n";

    printf("Insira o digito que deu defeito e o respectivo valor: ");
    fgets(entrada, sizeof(entrada), stdin);

    while ((strcmp(entrada, fim)) != 0) {
        removeDigito(entrada);

        printf("Insira o digito que deu defeito e o respectivo valor: ");
        fgets(entrada, sizeof(entrada), stdin);
    }

    printf("\nPrograma encerrado...\n");
    return 0;
}
