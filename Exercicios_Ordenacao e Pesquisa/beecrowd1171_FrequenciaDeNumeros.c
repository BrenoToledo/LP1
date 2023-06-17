//beecrowd 1171
#include <stdio.h>

typedef struct {
    int numero;
    int qtd;
} TNUMERO;

//-------------------------Algortimo de ordenação por seleção----------------
void selecao(TNUMERO *vetor, int tamanho) {
    int i, j, minimo;

    // Percorre o vetor
    for (i = 0; i < tamanho-1; i++) {
        // Encontra o elemento mínimo no vetor não ordenado
        minimo = i;
        for (j = i + 1; j < tamanho; j++)
            if (vetor[j].numero < vetor[minimo].numero)
                minimo = j;

        // Troca o elemento mínimo com o primeiro elemento não ordenado
        TNUMERO auxiliar = vetor[minimo];
        vetor[minimo] = vetor[i];
        vetor[i] = auxiliar;
    }
}
//--------------------------Pesquisa Binária--------------------------------
int pesquisaBinaria(TNUMERO *vetor, int inicio, int fim, int numero) {
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio].numero == numero) {
            return meio;
        } else if (vetor[meio].numero < numero) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; // Retorna -1 se o caractere não for encontrado
}

//---------------------------------principal---------------------------

int main()
{
    int qtdEntradas;
    //printf("Informe a quantidade de entradas: ");
    scanf("%i", &qtdEntradas);

    TNUMERO entrada[qtdEntradas];
    TNUMERO saida[qtdEntradas];
    for (int i = 0; i < qtdEntradas; i++)
    {
        //printf("Informe o valor [%i]: ", i + 1);
        scanf("%i", &entrada[i].numero);
        saida[i].numero = -1;
    }

    selecao(entrada, qtdEntradas);

    int j = 0;
    for (int i = 0; i < qtdEntradas; i++)
    {

        //pesquisar se o número já existe no vetor
        int indice = pesquisaBinaria(saida, 0, j, entrada[i].numero);

        //se o número NÃO existe no vetor, incluí-lo numa nova posição (índice) no vetor saída
        if (indice == -1)
        {
            saida[j].numero = entrada[i].numero;
            saida[j].qtd = 1;
            j++;
        }

        //se o número já existe no vetor, somar na quantidade
        else
        {
            saida[indice].qtd++; //incrementa a quantidade do numero encontrado
        }

    }

    //outro for para imprimir em ordem crescente de numero
    for (int i = 0; i < j; i++){
        if (saida[i].qtd > 0 && saida[i].numero > 0)
        printf("%d aparece %d vez(es)\n", saida[i].numero, saida[i].qtd);
    }

    return 0;
}
