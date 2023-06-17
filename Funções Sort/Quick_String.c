
#include <stdio.h>
#include <string.h>


/*
Neste c�digo, a fun��o swap � usada para trocar duas strings. A fun��o partition � respons�vel por fazer a parti��o do array,

escolhendo um piv� (neste caso, o �ltimo elemento) e colocando todas as strings menores que o piv� � sua esquerda e as maiores � sua direita,

 usando a fun��o strcmp para comparar as strings.

A fun��o quickSort � uma implementa��o recursiva do algoritmo Quick Sort. Ela chama a fun��o partition para obter a posi��o correta do piv� e,

em seguida, chama a si mesma para ordenar as partes � esquerda e � direita do piv�.

A fun��o printArray � usada para imprimir o array de strings na tela.

Na fun��o main, � criado um array de strings, e em seguida, � feita a chamada do Quick Sort para ordenar o array. Por fim, os arrays original e ordenado s�o impressos na tela.
*/


// Fun��o para trocar duas strings
void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

// Fun��o para realizar a parti��o do array de strings
int partition(char **array, int low, int high) {
    char *pivot = array[high]; // Escolhe o piv� como o �ltimo elemento do array
    int i = low - 1;

    // Percorre o array a partir do elemento low at� o elemento high - 1
    for (int j = low; j <= high - 1; j++) {
        if (strcmp(array[j], pivot) < 0) {
            i++;
            swap(&array[i], &array[j]); // Troca o elemento atual com o elemento na posi��o correta
        }
    }

    swap(&array[i + 1], &array[high]); // Coloca o piv� na posi��o correta
    return (i + 1); // Retorna a posi��o do piv�
}

// Fun��o recursiva para realizar o Quick Sort no array de strings
void quickSort(char **array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high); // Obt�m a posi��o correta do piv�

        // Chama recursivamente a fun��o para a parte � esquerda e � direita do piv�
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Fun��o para imprimir o array de strings
void printArray(char **array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");
}

int main() {
    char *array[] = {"banana", "ma��", "laranja", "abacaxi", "uva"};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array original: ");
    printArray(array, size);

    quickSort(array, 0, size - 1);

    printf("Array ordenado: ");
    printArray(array, size);

    return 0;
}
