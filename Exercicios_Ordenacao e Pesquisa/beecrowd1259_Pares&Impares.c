//beecrowd 1259
#include <stdio.h>

//--------------algoritmo quickSort---------------------------------------------------
void quickSortCrescente(int *vetor, int esq, int dir) {
    int i = esq, j = dir;
    int pivo = vetor[(esq + dir) / 2];

    while (i <= j) {
        while (vetor[i] < pivo)
            i++;
        while (vetor[j] > pivo)
            j--;
        if (i <= j) {
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
            i++;
            j--;
        }
    }

    if (esq < j)
        quickSortCrescente(vetor, esq, j);
    if (i < dir)
        quickSortCrescente(vetor, i, dir);
}

//--------------------------------Adaptação da função acima--------------------------
void quickSortDecrescente(int *vetor, int esq, int dir) {
    int i = esq, j = dir;
    int pivo = vetor[(esq + dir) / 2];

    while (i <= j) {
        while (vetor[i] > pivo)
            i++;
        while (vetor[j] < pivo)
            j--;
        if (i <= j) {
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
            i++;
            j--;
        }
    }

    if (esq < j)
        quickSortDecrescente(vetor, esq, j);
    if (i < dir)
        quickSortDecrescente(vetor, i, dir);
}

int main() {
    int N;
    scanf("%d", &N);

    int valores[N];
    int pares[N];
    int impares[N];

    int numPares = 0;
    int numImpares = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &valores[i]);

        if (valores[i] % 2 == 0) {
            pares[numPares] = valores[i];
            numPares++;
        } else {
            impares[numImpares] = valores[i];
            numImpares++;
        }
    }

    // Ordena a lista de pares em ordem crescente usando QuickSort
    quickSortCrescente(pares, 0, numPares - 1);

    // Ordena a lista de ímpares em ordem decrescente usando QuickSort
    quickSortDecrescente(impares, 0, numImpares - 1);

    // Imprime pares
    for (int i = 0; i < numPares; i++) {
        printf("%d\n", pares[i]);
    }

    // Imprime ímpares
    for (int i = 0; i < numImpares; i++) {
        printf("%d\n", impares[i]);
    }

    return 0;
}
