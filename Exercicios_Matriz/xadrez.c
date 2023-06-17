#include<stdio.h>

int main (void){

// Desafio xadrez sem usar If e sem usar Switch Case

char peca[7][18] = {"ausencia de pecas",
                    "peoes",
                    "cavalos",
                    "torres",
                    "bispos",
                    "reis",
                    "rainhas"};
int soma[7];
int tabuleiro [8][8];
int i, j, pecaX;

/*
peca[0] -> ausência de peças
peca[1] -> peões
peca[2] -> cavalos
peca[3] -> torres
peca[4] -> bispos
peca[5] -> reis
peca[6] -> rainhas
*/

for (i=0; i<7;i++){
    soma[i] = 0;}

for (i=0; i<8; i++)
    for (j=0; j<8; j++){
        //printf("Informe a peca da posicao da linha [%i] coluna [%i] do tabuleiro: ", i, j);
        scanf("%i", &tabuleiro[i][j]);
        pecaX = tabuleiro[i][j];

        while(pecaX == 0){
            soma[0] += 1;
            pecaX = 8;
        }

        while(pecaX == 1){
            soma[1] += 1;
            pecaX = 8;
        }        
        
        while(pecaX == 2){
            soma[2] += 1;
            pecaX = 8;
        }        
        
        while(pecaX == 3){
            soma[3] += 1;
            pecaX = 8;
        }        
        
        while(pecaX == 4){
            soma[4] += 1;
            pecaX = 8;
        }        
        
        while(pecaX == 5){
            soma[5] += 1;
            pecaX = 8;
        }        
        
        while(pecaX == 6){
            soma[6] += 1;
            pecaX = 8;
        }        
        
        while(pecaX == 7){
            soma[7] += 1;
            pecaX = 8;
        }        
    }

for (i=0; i<7; i++){
    printf("%s = %i\n", peca[i], soma[i]);
    }

}