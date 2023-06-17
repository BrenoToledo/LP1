#include <stdio.h>

/*
Neste c�digo, a fun��o sequentialSearch realiza a busca sequencial em um array de inteiros. Ela recebe o ponteiro para o array, o tamanho do array e o elemento alvo a ser buscado.

A busca sequencial percorre o array do in�cio ao fim e compara cada elemento com o elemento alvo. Se o elemento alvo for encontrado, a fun��o retorna o �ndice correspondente. Caso contr�rio, se nenhum elemento correspondente for encontrado, a fun��o retorna -1 para indicar que o elemento n�o est� presente no array.

No main, um array de inteiros � definido e a fun��o sequentialSearch � chamada para procurar o elemento alvo no array. O resultado � impresso no console.

Espero que isso seja �til!
*/
int sequentialSearch(int *array, int size, int target) {
    int i;

    for (i = 0; i < size; i++) {
        if (*(array + i) == target) {
            return i;  // Elemento encontrado, retorna o �ndice
        }
    }

    return -1;  // Elemento n�o encontrado
}

int main() {
    int array[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int size = sizeof(array) / sizeof(array[0]);

    int target = 44;
    int index = sequentialSearch(array, size, target);

    if (index != -1) {
        printf("Elemento %d encontrado no �ndice %d\n", target, index);
    } else {
        printf("Elemento %d n�o encontrado\n", target);
    }

    return 0;
}
