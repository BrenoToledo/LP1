#include <stdio.h>
#include <string.h>

//funcao que converte string em inteiro
int converte (char caracter){
    int numero = caracter - 48;
    return numero;
}

int main (void){
    int nLinhas;
    char caracter[15];
    int i;

    //printf("Insira o numero de linhas: ");
    scanf("%i", &nLinhas);

    for (i = 1; i <= nLinhas; i++){
        //printf("Insira o valor da linha %i: ", i);
        scanf("%s", caracter);
        
        int soma = 0;

        soma += converte (caracter[2]) * 10;
        soma += converte (caracter[3]);

        soma += converte (caracter[5]) * 100;
        soma += converte (caracter[6]) * 10; 
        soma += converte (caracter[7]);

        soma += converte (caracter[11]) * 10;
        soma += converte (caracter[12]);

        //printf("a soma da linha %i eh:", i);
        printf("%i\n", soma);
    }

}