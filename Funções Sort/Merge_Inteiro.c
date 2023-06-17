#include <stdio.h>


/*
Neste c�digo, a fun��o merge � usada para mesclar dois sub-arrays em ordem crescente. Ela recebe o array principal, o sub-array esquerdo, o tamanho do sub-array esquerdo, o sub-array direito e o tamanho do sub-array direito. A fun��o percorre os sub-arrays comparando e mesclando os elementos em ordem crescente.

A fun��o mergeSort � uma implementa��o recursiva do algoritmo Merge Sort. Ela divide o array em dois sub-arrays

*/

// Fun��o para mesclar dois sub-arrays em ordem crescente
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0; // �ndice para percorrer o sub-array esquerdo
    int j = 0; // �ndice para percorrer o sub-array direito
    int k = 0; // �ndice para percorrer o array final mesclado

    // Percorre os sub-arrays comparando e mesclando os elementos em ordem crescente
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes do sub-array esquerdo, se houver
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copia os elementos restantes do sub-array direito, se houver
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Fun��o recursiva para realizar o Merge Sort
void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return; // Caso base: o array j� est� ordenado ou vazio
    }

    int mid = size / 2; // Encontra o meio do array

    // Divide o array em dois sub-arrays
    int left[mid];
    int right[size - mid];

    // Copia os elementos para os sub-arrays
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

    // Chama recursivamente o Merge Sort nos sub-arrays
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Mescla os sub-arrays ordenados
    merge(arr, left, mid, right, size - mid);
}

// Fun��o para imprimir o array de inteiros
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    printArray(arr, size);

    mergeSort(arr, size);

    printf("Array ordenado: ");
    printArray(arr, size);

    return 0;
}
