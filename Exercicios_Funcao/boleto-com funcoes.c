#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define QTD_DIGITOS 100

//------------------mostra banco----------------------------
void fBanco(char numerosBoleto[]){
    char codBanco[4];
    int k = 0;

    for (k = 0; k < 3; k++){
        codBanco[k] = numerosBoleto[k];
        }

    codBanco[k] = '\0';

    switch (atoi(codBanco)){
        case 001:
            printf("Banco do Brasil\n");
            break;
        case 033:
            printf("Santander\n");
            break;
        case 104:
            printf("Caixa Economica Federal\n");
            break;
        case 341:
            printf("Itau\n");
            break;
        case 745:
            printf("Citibank\n");
            break;
        default:
            printf("Banco nao cadastrado\n");
            break;
        }
}
//-----------------mostra valor-----------------------------

void fvalBoleto(char numerosBoleto[]){

    int novoTamanho = strlen(numerosBoleto);
    char stringValor[11];
    float valor;
    int m, n = 0;

    for (int m = novoTamanho - 10; m <= novoTamanho - 1; m++){
        stringValor[n] = numerosBoleto[m];
        n++;
    }

    stringValor[11] = '\0';
    valor = atof(stringValor) / 100; //transforma string em float.

    printf ("Valor bruto: R$%.2f\n", valor);
    printf ("Valor com multa: R$%.2f\n", valor*1.1);
    }

//------------------principal----------------------------

int main (void)
{
    char codBoleto[QTD_DIGITOS];

    printf("Digite o numero do boleto: ");
    fgets(codBoleto, sizeof(codBoleto) , stdin);

    while(1){

        int tamanho = strlen(codBoleto);
        char numerosBoleto[tamanho];
        int j = 0;

        for (int i = 0; i < tamanho; i++){
            if (isdigit(codBoleto[i])){
                numerosBoleto[j] = codBoleto[i];
                j++;
            }
        }
        numerosBoleto[j] = '\0';

        //numerosBoleto é igual a codBoleto, porém sem espaços e pontos.
        //Não precisaria, fiz apenas para testar o comando isdigit.

        fBanco(numerosBoleto);

        fvalBoleto(numerosBoleto);

        printf("\nInsira um novo boleto ou digite [FIM] para encerrar o programa: ");
        fgets(codBoleto, sizeof(codBoleto) , stdin);

        if (strcmp(codBoleto,"FIM\n") == 0 || strcmp(codBoleto,"fim\n") == 0)
            break;
    }
        printf("\nPrograma encerrado...\n");
}


