#include <stdio.h>
#include <string.h>

void substring (char *fraseOrigem, char *fraseDestino, int posInicio, int posFim){
    int w = 0;
    for (int i = posInicio; i <= posFim; i++){
        *(fraseDestino + w) = *(fraseOrigem + i);
        w++;
    }
    *(fraseDestino + w) = '\0';

}

int main(){
   char fraseOrigem[31],fraseDestino[31] ;
   int posInicio, posFim, w=0;

   printf("Informe uma frase: ");
   gets(fraseOrigem); //programacao

   printf("Informe a posicao Inicial: ");
   scanf("%i",&posInicio); //3

   printf("Informe a posicao Final: ");
   scanf("%i",&posFim);// 7
   printf("\n--> %p, %c", fraseOrigem, fraseOrigem[0]);
   printf("\n--> %p, %c", fraseDestino, fraseDestino[0]);

   substring(fraseOrigem, fraseDestino, posInicio, posFim);

   printf("\nFrase Destino: %s", fraseDestino);

}
