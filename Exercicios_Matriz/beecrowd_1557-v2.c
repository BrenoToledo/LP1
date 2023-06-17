#include<stdio.h>
#include<math.h>

int main (void){

int N, i, j;

do {

    scanf("%i", &N);
            //*****criacao de nova matriz******
    int T[N][N];

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){

            //*****expoente*****
            T[i][j] = pow(2,(i+j));

            //******tabulacao******
            int maiorValor = pow(2, ((N-1)*2));
            int casas = 0;
            while (maiorValor > pow(10,casas))
                casas++;
            
            while (T[i][j] < pow(10,casas)){
                printf(" ");
                casas--;                
            }
            
            printf("%i", T[i][j]);

            }

            printf("\n");
        }

    } while(N!=0);

}