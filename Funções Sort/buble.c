#include <stdio.h>
#include <string.h>

// Função de ordenação Bubble Sort para array de inteiros
void bubbleSortInt(int *array, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (*(array + j) > *(array + j + 1)) {
                temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}

// Função de ordenação Bubble Sort para array de strings
void bubbleSortString(char **array, int size) {
    int i, j;
    char *temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (strcmp(*(array + j), *(array + j + 1)) > 0) {
                temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
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

    bubbleSortInt(intArray, intSize);

    printf("Array de inteiros ordenado: ");
    printIntArray(intArray, intSize);

    printf("\n");

    printf("Array de strings original: ");
    printStringArray(stringArray, stringSize);

    bubbleSortString(stringArray, stringSize);

    printf("Array de strings ordenado: ");
    printStringArray(stringArray, stringSize);

    return 0;
}
