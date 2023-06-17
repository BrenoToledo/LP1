
#include <stdio.h>
#include <string.h>


/*
Neste código, a função swap é usada para trocar duas strings. A função partition é responsável por fazer a partição do array,

escolhendo um pivô (neste caso, o último elemento) e colocando todas as strings menores que o pivô à sua esquerda e as maiores à sua direita,

 usando a função strcmp para comparar as strings.

A função quickSort é uma implementação recursiva do algoritmo Quick Sort. Ela chama a função partition para obter a posição correta do pivô e,

em seguida, chama a si mesma para ordenar as partes à esquerda e à direita do pivô.

A função printArray é usada para imprimir o array de strings na tela.

Na função main, é criado um array de strings, e em seguida, é feita a chamada do Quick Sort para ordenar o array. Por fim, os arrays original e ordenado são impressos na tela.
*/


// Função para trocar duas strings
void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

// Função para realizar a partição do array de strings
int partition(char **array, int low, int high) {
    char *pivot = array[high]; // Escolhe o pivô como o último elemento do array
    int i = low - 1;

    // Percorre o array a partir do elemento low até o elemento high - 1
    for (int j = low; j <= high - 1; j++) {
        if (strcmp(array[j], pivot) < 0) {
            i++;
            swap(&array[i], &array[j]); // Troca o elemento atual com o elemento na posição correta
        }
    }

    swap(&array[i + 1], &array[high]); // Coloca o pivô na posição correta
    return (i + 1); // Retorna a posição do pivô
}

// Função recursiva para realizar o Quick Sort no array de strings
void quickSort(char **array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high); // Obtém a posição correta do pivô

        // Chama recursivamente a função para a parte à esquerda e à direita do pivô
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Função para imprimir o array de strings
void printArray(char **array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");
}

int main() {
    char *array[] = {"banana", "maçã", "laranja", "abacaxi", "uva"};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array original: ");
    printArray(array, size);

    quickSort(array, 0, size - 1);

    printf("Array ordenado: ");
    printArray(array, size);

    return 0;
}
