//beecrowd1162

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bolha(int *vetor, int tamanho) {
    int temp, trocas = 0;

    for (int i = 0; i < tamanho-1; i++) {
        for (int j = 0; j < tamanho-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
                trocas++;
            }
        }
    }

    return trocas;
}

int main() {
    int numTestes, numVagoes, numTrocas;

    //printf("Informe o numero de trens: ");
    scanf("%i", &numTestes);

    for (int i = 0; i < numTestes; i++) {
        //printf("Informe o numero de vagoes do trem[%i]: ", i + 1);
        scanf("%i", &numVagoes);

        char tremString[numVagoes * 4];
        int trem[numVagoes];
        //printf("Informe os vagoes: ");
        scanf(" %[^\n]", tremString);
        //printf("Numero pego: \t%s\n", tremString);

        char *token = strtok(tremString, " ");
        int j = 0;
        while (token != NULL && j < numVagoes) {
            trem[j] = atoi(token);
            //printf("Numero pego: %d\n", trem[j]);
            token = strtok(NULL, " ");
            j++;
        }

        numTrocas = bolha(trem, numVagoes);

        printf("Optimal train swapping takes %d swaps.\n", numTrocas);
    }

    return 0;
}
