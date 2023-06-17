//Danilo Gennari dos Santos
//Breno Jesus Toledo

#include <stdio.h>
#include <string.h>
#include "Conta_Bancaria.h"

#define MAX_CONTAS 100

// Função para abrir uma nova conta
void abrirConta(TCONTA contas[], int *numContas) {
    if (*numContas >= MAX_CONTAS) {
        printf("Limite maximo de contas atingido.\n");
        return;
    }

    TCONTA novaConta;

    printf("Digite o nome do titular da conta: ");
    scanf("%s", novaConta.nome);

    printf("Digite o numero da conta: ");
    scanf("%d", &novaConta.numConta);

    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &novaConta.saldo);

    contas[*numContas] = novaConta;
    *numContas=*numContas+1;

    printf("Conta aberta com sucesso!\n");
}

// Função para realizar um depósito em uma conta existente
void realizarDeposito(TCONTA contas[], int numContas) {
    int numConta;
    float valor;

    printf("Digite o numero da conta: ");
    scanf("%d", &numConta);

    int i;
    // pesquisa sequencial
	for (i = 0; i < numContas; i++) {
        if (contas[i].numConta == numConta) {
            break;
        }
    }

    if (i == numContas) {
        printf("Conta nao encontrada.\n");
        return;
    }

    printf("Digite o valor do deposito: ");
    scanf("%f", &valor);

    contas[i].saldo += valor;

    printf("Deposito realizado com sucesso!\n");
    printf("Saldo apos deposito: %.2f\n", contas[i].saldo);
}

// Função para realizar uma retirada de uma conta existente
void realizarRetirada(TCONTA contas[], int numContas) {
    int numConta;
    float valor;

    printf("Digite o numero da conta: ");
    scanf("%d", &numConta);
    // AQUI
    selecao (numContas, contas);
    // realizar a pesquisa binária
    int k = PesquisaBinariaRec(contas, 0, numContas, numConta);
	// se não achou conta, exibir mensagem de erro
	if (k == -1)
        printf("Numero de conta nao encontrado!\n");
	// se achou, verificar se tem saldo. Se tiver, fazer a retirada
	else{
        if (contas[k].saldo <= 0)
            printf("Conta sem saldo!\n");
        else{
            printf("Digite o valor que deseja sacar: ");
            scanf("%f", &valor);
            if (contas[k].saldo < valor){
                printf("Saldo insuficiente!\n");
            }
            else{
                contas[k].saldo = contas[k].saldo - valor;
                printf("Saldo apos retirada = %.2f\n",contas[k].saldo);
            }

        }
	}


}

void mostrarContas(TCONTA contas[], int numContas) {
    printf("\n---- Contas Ordenadas ----\n");
    for (int i = 0; i < numContas; i++) {
        printf("Nome: %s\n", contas[i].nome);
        printf("Numero da Conta: %d\n", contas[i].numConta);
        printf("Saldo: %.2f\n", contas[i].saldo);
        printf("--------------------------\n");
    }
}
// Função para ordenar as contas por ordem de nome usando o método de inserção
void ordenarContasPorNome(TCONTA contas[], int numContas) {
    // AQUI fazer a função de ordenação por nome de contas
    insercao (numContas, contas);
}

int main() {
    TCONTA contas[MAX_CONTAS];
    int numContas = 3;
    int opcao;

    //---------------------contas------------------
    strcpy(contas[0].nome, "Danilo");
    contas[0].numConta = 111;
    contas[0].saldo = 100.75;

    strcpy(contas[1].nome, "Breno");
    contas[1].numConta = 222;
    contas[1].saldo = 125.50;

    strcpy(contas[2].nome, "Cris");
    contas[2].numConta = 333;
    contas[2].saldo = 50000.30;
    //---------------------------------------------


    do {
        printf("Selecione uma opcao:\n");
        printf("1 - Abrir conta\n");
        printf("2 - Realizar deposito\n");
        printf("3 - Realizar retirada\n");
        printf("4 - Ordenar contas por nome\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // AQUI CHAMAR A FUNÇÃO ABRIR CONTA
                abrirConta(contas, &numContas);
                break;
            case 2:
                realizarDeposito(contas, numContas);
                break;
            case 3:
                realizarRetirada(contas, numContas);
                break;
            case 4:
                ordenarContasPorNome(contas, numContas);
                mostrarContas(contas, numContas);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

        printf("\n");
    } while (opcao != 0);

    return 0;
}
