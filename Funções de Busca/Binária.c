#include <stdio.h>


/*
Explica��es adicionais:

A vari�vel left � o �ndice do primeiro elemento do subarray atual, e right � o �ndice do �ltimo elemento. Inicialmente, left � 0 e right � o tamanho do array menos 1.

O la�o while executa enquanto o left for menor ou igual ao right. Se eles forem iguais, significa que a busca foi reduzida a uma faixa vazia e o elemento alvo n�o foi encontrado.

O �ndice do elemento do meio � calculado usando a f�rmula mid = left + (right - left) / 2. Isso evita estouro de inteiros e garante um arredondamento adequado para baixo.

Dentro do la�o, o elemento do meio � comparado com o elemento alvo. Se eles forem iguais, a fun��o retorna o �ndice correspondente.

Se o elemento alvo for menor que o elemento do meio, a busca � realizada na metade esquerda do array, ent�o o right � atualizado para mid - 1.

Se o elemento alvo for maior que o elemento do meio, a busca � realizada na metade direita do array, ent�o o left � atualizado para mid + 1.

Se o elemento alvo n�o for encontrado ap�s o la�o, a fun��o retorna -1 para indicar que o elemento n�o est� presente no array.

No main, um exemplo de array de inteiros � definido e a fun��o binarySearch � chamada para procurar o elemento alvo no array. O resultado � impresso no console.

Espero que isso ajude a entender o c�digo!
*/


// Fun��o de busca bin�ria
int binarySearch(int *array, int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calcula o �ndice do elemento do meio

        if (*(array + mid) == target) {
            return mid;  // Elemento encontrado, retorna o �ndice
        }

        if (*(array + mid) < target) {
            left = mid + 1;  // Busca na metade direita do array
        } else {
            right = mid - 1;  // Busca na metade esquerda do array
        }
    }

    return -1;  // Elemento n�o encontrado
}

int main() {
    int array[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int size = sizeof(array) / sizeof(array[0]);

    int target = 44;
    int index = binarySearch(array, size, target);

    if (index != -1) {
        printf("Elemento %d encontrado no �ndice %d\n", target, index);
    } else {
        printf("Elemento %d n�o encontrado\n", target);
    }

    return 0;
}
