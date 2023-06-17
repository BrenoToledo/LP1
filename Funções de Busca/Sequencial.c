#include <stdio.h>

/*
Neste código, a função sequentialSearch realiza a busca sequencial em um array de inteiros. Ela recebe o ponteiro para o array, o tamanho do array e o elemento alvo a ser buscado.

A busca sequencial percorre o array do início ao fim e compara cada elemento com o elemento alvo. Se o elemento alvo for encontrado, a função retorna o índice correspondente. Caso contrário, se nenhum elemento correspondente for encontrado, a função retorna -1 para indicar que o elemento não está presente no array.

No main, um array de inteiros é definido e a função sequentialSearch é chamada para procurar o elemento alvo no array. O resultado é impresso no console.

Espero que isso seja útil!
*/
int sequentialSearch(int *array, int size, int target) {
    int i;

    for (i = 0; i < size; i++) {
        if (*(array + i) == target) {
            return i;  // Elemento encontrado, retorna o índice
        }
    }

    return -1;  // Elemento não encontrado
}

int main() {
    int array[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int size = sizeof(array) / sizeof(array[0]);

    int target = 44;
    int index = sequentialSearch(array, size, target);

    if (index != -1) {
        printf("Elemento %d encontrado no índice %d\n", target, index);
    } else {
        printf("Elemento %d não encontrado\n", target);
    }

    return 0;
}
