#include <stdio.h>

int main (void){

float M[12][12], Soma = 0.0;
int L, i, j;
char T;

for (i = 0; i < 12; i++){
    for (j = 0; j < 12; j++){
        printf("\nInforme o valor [%i][%i]:", i, j);
        scanf("%f", &M[i][j]);
    }     
}

printf("\nInforme a linha: ");
scanf("%i", &L);

for (i = 0; i < 12; i++){
    Soma += M[L][i];
}

printf("\nInforme o tipo de operacao. [S] ou [M]: ");
scanf("%s", &T);

if (T == 'S')
    printf("A soma eh: %.1f", Soma);
else if (T == 'M')
    printf("A media eh: %.1f", Soma / 12);
}
