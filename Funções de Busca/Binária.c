#include <stdio.h>


/*
Explicações adicionais:

A variável left é o índice do primeiro elemento do subarray atual, e right é o índice do último elemento. Inicialmente, left é 0 e right é o tamanho do array menos 1.

O laço while executa enquanto o left for menor ou igual ao right. Se eles forem iguais, significa que a busca foi reduzida a uma faixa vazia e o elemento alvo não foi encontrado.

O índice do elemento do meio é calculado usando a fórmula mid = left + (right - left) / 2. Isso evita estouro de inteiros e garante um arredondamento adequado para baixo.

Dentro do laço, o elemento do meio é comparado com o elemento alvo. Se eles forem iguais, a função retorna o índice correspondente.

Se o elemento alvo for menor que o elemento do meio, a busca é realizada na metade esquerda do array, então o right é atualizado para mid - 1.

Se o elemento alvo for maior que o elemento do meio, a busca é realizada na metade direita do array, então o left é atualizado para mid + 1.

Se o elemento alvo não for encontrado após o laço, a função retorna -1 para indicar que o elemento não está presente no array.

No main, um exemplo de array de inteiros é definido e a função binarySearch é chamada para procurar o elemento alvo no array. O resultado é impresso no console.

Espero que isso ajude a entender o código!
*/


// Função de busca binária
int binarySearch(int *array, int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calcula o índice do elemento do meio

        if (*(array + mid) == target) {
            return mid;  // Elemento encontrado, retorna o índice
        }

        if (*(array + mid) < target) {
            left = mid + 1;  // Busca na metade direita do array
        } else {
            right = mid - 1;  // Busca na metade esquerda do array
        }
    }

    return -1;  // Elemento não encontrado
}

int main() {
    int array[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int size = sizeof(array) / sizeof(array[0]);

    int target = 44;
    int index = binarySearch(array, size, target);

    if (index != -1) {
        printf("Elemento %d encontrado no índice %d\n", target, index);
    } else {
        printf("Elemento %d não encontrado\n", target);
    }

    return 0;
}
