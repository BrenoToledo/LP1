#include <stdio.h>

/*

Neste código, a função swap é usada para trocar dois elementos inteiros. A função partition é responsável por fazer a partição do array, escolhendo um pivô (neste caso, o último elemento) e colocando todos os elementos menores que o pivô à sua esquerda e os maiores à sua direita.

A função quickSort é uma implementação recursiva do algoritmo Quick Sort. Ela chama a função partition para obter a posição correta do pivô e, em seguida, chama a si mesma para ordenar as partes à esquerda e à direita do pivô.

A função printArray é usada para imprimir o array de inteiros na tela.

Na função main, é criado um array de números inteiros, e em seguida, é feita a chamada do Quick Sort para ordenar o array. Por fim, os arrays original e ordenado são impressos na tela.

*/





// Função para trocar dois elementos inteiros
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para realizar a partição do array de inteiros
int partition(int *array, int low, int high) {
    int pivot = array[high]; // Escolhe o pivô como o último elemento do array
    int i = (low - 1);

    // Percorre o array a partir do elemento low até o elemento high - 1
    for (int j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]); // Troca o elemento atual com o elemento na posição correta
        }
    }

    swap(&array[i + 1], &array[high]); // Coloca o pivô na posição correta
    return (i + 1); // Retorna a posição do pivô
}

// Função recursiva para realizar o Quick Sort no array de inteiros
void quickSort(int *array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high); // Obtém a posição correta do pivô

        // Chama recursivamente a função para a parte à esquerda e à direita do pivô
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Função para imprimir o array de inteiros
void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array original: ");
    printArray(array, size);

    quickSort(array, 0, size - 1);

    printf("Array ordenado: ");
    printArray(array, size);

    return 0;
}
