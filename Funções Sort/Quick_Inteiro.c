#include <stdio.h>

/*

Neste c�digo, a fun��o swap � usada para trocar dois elementos inteiros. A fun��o partition � respons�vel por fazer a parti��o do array, escolhendo um piv� (neste caso, o �ltimo elemento) e colocando todos os elementos menores que o piv� � sua esquerda e os maiores � sua direita.

A fun��o quickSort � uma implementa��o recursiva do algoritmo Quick Sort. Ela chama a fun��o partition para obter a posi��o correta do piv� e, em seguida, chama a si mesma para ordenar as partes � esquerda e � direita do piv�.

A fun��o printArray � usada para imprimir o array de inteiros na tela.

Na fun��o main, � criado um array de n�meros inteiros, e em seguida, � feita a chamada do Quick Sort para ordenar o array. Por fim, os arrays original e ordenado s�o impressos na tela.

*/





// Fun��o para trocar dois elementos inteiros
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fun��o para realizar a parti��o do array de inteiros
int partition(int *array, int low, int high) {
    int pivot = array[high]; // Escolhe o piv� como o �ltimo elemento do array
    int i = (low - 1);

    // Percorre o array a partir do elemento low at� o elemento high - 1
    for (int j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]); // Troca o elemento atual com o elemento na posi��o correta
        }
    }

    swap(&array[i + 1], &array[high]); // Coloca o piv� na posi��o correta
    return (i + 1); // Retorna a posi��o do piv�
}

// Fun��o recursiva para realizar o Quick Sort no array de inteiros
void quickSort(int *array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high); // Obt�m a posi��o correta do piv�

        // Chama recursivamente a fun��o para a parte � esquerda e � direita do piv�
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Fun��o para imprimir o array de inteiros
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
