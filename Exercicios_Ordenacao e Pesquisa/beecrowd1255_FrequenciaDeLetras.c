//beecrowd1255
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char letra;
    int qtd;
} TCARACTER;

int pesquisaBinaria(TCARACTER vetor[], int inicio, int fim, char caracter) {
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio].letra == caracter) {
            return meio;
        } else if (vetor[meio].letra < caracter) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; // Retorna -1 se o caractere não for encontrado
}

void bolha(TCARACTER *vetor, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j].letra > vetor[j + 1].letra) {
                TCARACTER temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void insercao(TCARACTER *vetor, int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        TCARACTER caracter = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j].qtd < caracter.qtd) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = caracter;
    }
}

int main() {
    int qtdTestes;
    scanf("%d", &qtdTestes);

    while (getchar() != '\n') {
        continue; // Limpa o buffer do teclado após a leitura do inteiro
    }

    for (int i = 0; i < qtdTestes; i++) {
        char origem[201];
        scanf(" %[^\n]", origem);

        int tamanho = strlen(origem);
        TCARACTER contador[26]; // 26 letras do alfabeto
        int l = 0;
        int indice = -1;

        for (int j = 0; j < tamanho; j++) {
            if (isalpha(origem[j])) { // Verifica se o caractere é uma letra
                char letra = tolower(origem[j]);

                bolha(contador, l);
                indice = pesquisaBinaria(contador, 0, l - 1, letra);

                if (indice == -1) {
                    contador[l].letra = letra;
                    contador[l].qtd = 1;
                    l++;
                } else {
                    contador[indice].qtd++; // Incrementa a contagem do caractere repetido
                }
            }
        }

        bolha(contador, l);
        insercao(contador, l); // Ordena o vetor de caracteres por ordem de ocorrência

        int max_ocorrencia = contador[0].qtd; // Maior ocorrência encontrada

        int j = 0;
        while (j < l && contador[j].qtd == max_ocorrencia) {
            printf("%c", contador[j].letra);
            j++;
        }

        printf("\n");
    }

    return 0;
}

