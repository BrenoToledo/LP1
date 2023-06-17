#include <stdio.h>
#include <string.h>

// Função de ordenação Insertion Sort para array de inteiros
void insertionSortInt(int *array, int size) {
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = *(array + i);
        j = i - 1;

        // Move os elementos maiores que a chave para a direita
        while (j >= 0 && *(array + j) > key) {
            *(array + j + 1) = *(array + j);
            j = j - 1;
        }

        *(array + j + 1) = key;
    }
}

// Função de ordenação Insertion Sort para array de strings
void insertionSortString(char **array, int size) {
    int i, j;
    char *key;
    for (i = 1; i < size; i++) {
        key = *(array + i);
        j = i - 1;

        // Move as strings maiores que a chave para a direita
        while (j >= 0 && strcmp(*(array + j), key) > 0) {
            *(array + j + 1) = *(array + j);
            j = j - 1;
        }

        *(array + j + 1) = key;
    }
}

// Função para imprimir array de inteiros
void printIntArray(int *array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

// Função para imprimir array de strings
void printStringArray(char **array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%s ", *(array + i));
    }
    printf("\n");
}

int main() {
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    char *stringArray[] = {"banana", "maçã", "laranja", "abacaxi", "uva"};

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int stringSize = sizeof(stringArray) / sizeof(stringArray[0]);

    printf("Array de inteiros original: ");
    printIntArray(intArray, intSize);

    insertionSortInt(intArray, intSize);

    printf("Array de inteiros ordenado: ");
    printIntArray(intArray, intSize);

    printf("\n");

    printf("Array de strings original: ");
    printStringArray(stringArray, stringSize);

    insertionSortString(stringArray, stringSize);

    printf("Array de strings ordenado: ");
    printStringArray(stringArray, stringSize);

    return 0;
}
