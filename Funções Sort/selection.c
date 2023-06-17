#include <stdio.h>
#include <string.h>

// Função de ordenação Selection Sort para array de inteiros
void selectionSortInt(int *array, int size) {
    int i, j, minIndex, temp;
    for (i = 0; i < size - 1; i++) {
        minIndex = i;

        // Encontra o índice do menor elemento não ordenado
        for (j = i + 1; j < size; j++) {
            if (*(array + j) < *(array + minIndex)) {
                minIndex = j;
            }
        }

        // Troca o menor elemento encontrado com o primeiro elemento não ordenado
        temp = *(array + i);
        *(array + i) = *(array + minIndex);
        *(array + minIndex) = temp;
    }
}

// Função de ordenação Selection Sort para array de strings
void selectionSortString(char **array, int size) {
    int i, j, minIndex;
    char *temp;
    for (i = 0; i < size - 1; i++) {
        minIndex = i;

        // Encontra o índice da menor string não ordenada
        for (j = i + 1; j < size; j++) {
            if (strcmp(*(array + j), *(array + minIndex)) < 0) {
                minIndex = j;
            }
        }

        // Troca a menor string encontrada com a primeira string não ordenada
        temp = *(array + i);
        *(array + i) = *(array + minIndex);
        *(array + minIndex) = temp;
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

    selectionSortInt(intArray, intSize);

    printf("Array de inteiros ordenado: ");
    printIntArray(intArray, intSize);

    printf("\n");

    printf("Array de strings original: ");
    printStringArray(stringArray, stringSize);

    selectionSortString(stringArray, stringSize);

    printf("Array de strings ordenado: ");
    printStringArray(stringArray, stringSize);

    return 0;
}
