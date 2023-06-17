#include<stdio.h>
#include<string.h>
#include<ctype.h>


void main (void){

    typedef struct {
        int num;
        char descr[25];
        double valor;
        int qtde[12];
        }TProd;

    TProd vProd;

    printf ("\n-----------------Exercicio a)-------------------------\n\n");
    vProd.num = 1453;
    strcpy(vProd.descr,"Pino de aco 8mm");
    vProd.valor = 5.32;

    vProd.qtde[0] = 120;
    vProd.qtde[1] = 89;
    vProd.qtde[2] = 72;
    vProd.qtde[3] = 15;
    vProd.qtde[4] = 32;
    vProd.qtde[5] = 33;
    vProd.qtde[6] = 44;
    vProd.qtde[7] = 566;
    vProd.qtde[8] = 281;
    vProd.qtde[9] = 32;
    vProd.qtde[10] = 10;
    vProd.qtde[11] = 29;

    printf("num: %d\n", vProd.num);
    printf("descr: %s\n", vProd.descr);
    printf("valor: %.2f\n", vProd.valor);

    for (int i = 0; i < 12; i++) {
        printf("qtde[%d]: %d\n", i, vProd.qtde[i]);
    }

    printf ("\n-----------------Exercicio b)-------------------------\n\n");

    for (int i = 0; i < 12; i++) {
        vProd.qtde[i] = 0;
        printf("qtde[%d]: %d\n", i, vProd.qtde[i]);
    }

    printf ("\n-----------------Exercicio c)-------------------------\n\n");

    int tamanho = strlen(vProd.descr);
    printf("descr: %s\n", vProd.descr);

    for (int i = 0; i < tamanho; i++){
        *(vProd.descr + i) = toupper(vProd.descr[i]);
    }
    printf("descr: %s\n", vProd.descr);

    printf ("\n-----------------Exercicio d)-------------------------\n\n");

    vProd.qtde[0] = 120;
    vProd.qtde[1] = 89;
    vProd.qtde[2] = 72;
    vProd.qtde[3] = 15;
    vProd.qtde[4] = 32;
    vProd.qtde[5] = 33;
    vProd.qtde[6] = 44;
    vProd.qtde[7] = 566;
    vProd.qtde[8] = 281;
    vProd.qtde[9] = 32;
    vProd.qtde[10] = 10;
    vProd.qtde[11] = 29;

    int soma = 0;
    for (int i = 0; i < 12; i++)
        {
    soma += vProd.qtde[i];
        }
    printf("Soma das quantidades: %d\n", soma);

    int menor = vProd.qtde[0];
    for (int i = 1; i < 12; i++)
    {
        if (vProd.qtde[i] < menor) {
        menor = vProd.qtde[i];
        }
    }
    printf("Menor quantidade: %d\n", menor);

    int maior = vProd.qtde[0];
    for (int i = 1; i < 12; i++)
    {
        if (vProd.qtde[i] > maior){
        maior = vProd.qtde[i];
        }
    }
    printf("Maior quantidade: %d\n", maior);
}
