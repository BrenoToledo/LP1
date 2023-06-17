#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define MAX_DIGITOS 20
#define NUM_JOGADORES 2

typedef struct {
    char memoria[MAX_DIGITOS];
    int num;
    int acertos;
} Jogador;

int gerarAleatorio(){
    return rand() % 10;
}

void exibirNumero(char* memoria){
    printf("Memorize o numero: %s\n", memoria);
    sleep(4);
    system("cls");
}

int chutar(){
    int chute;
    printf("Forneca o seu chute: ");
    scanf("%d", &chute);
    return chute;
}

void main (){
    srand(time(NULL));
    Jogador jogadores[NUM_JOGADORES];

    for (int i = 0; i < NUM_JOGADORES; i++){
     jogadores[i].acertos = 0;
     jogadores[i].num = 0;
     strcpy(jogadores[i].memoria, "");
    }

    int rodada = 1;
    int gameOver = 0;

    while(gameOver == 0)
    {
        printf("Rodada %d\n", rodada);

        for (int i = 0; i < NUM_JOGADORES; i++)
        {
        jogadores[i].num = gerarAleatorio();

        char numStr[2];
        sprintf (numStr, "%d", jogadores[i].num);

        char memoriaAux[MAX_DIGITOS];
        strcpy(memoriaAux, jogadores[i].memoria);
        strcat(memoriaAux, numStr);
        exibirNumero(memoriaAux);

        strcpy(jogadores[i].memoria, memoriaAux);

        memset(memoriaAux, 0, sizeof(memoriaAux));

        int chute = chutar();
        char chuteStr[MAX_DIGITOS];
        sprintf (chuteStr, "%d", chute);

        if (strcmp(chuteStr,jogadores[i].memoria) == 0)
            {
            printf("Jogador %d acertou!\n\n", i+1);
            jogadores[i].acertos++;
            }
        else
            {
            printf("Jogador %d errou!\n\n", i+1);
            gameOver = 1;
            }
        }
        rodada++;
    }

    if (jogadores[0].acertos > jogadores[1].acertos)
        printf("Jogador 1 venceu com %d acertos!\n",jogadores[0].acertos);
    else if (jogadores[1].acertos > jogadores[0].acertos)
        printf("Jogador 2 venceu com %d acertos!\n",jogadores[1].acertos);
    else
        printf("Empate!");

    printf("\nFim do jogo...\n");
}
