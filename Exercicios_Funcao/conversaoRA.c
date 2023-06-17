#include<stdio.h>
#include<string.h>

void fraNovo(char raAntigo[]){

    char raNovo[14];
    strcpy(raNovo, "003048");

    int k =2;
    for (int j = 6; j < 9; j++){
        raNovo[j] = raAntigo[k];
        k++;
        }

        if (raAntigo[1] == 'D')
            raNovo[9] = '1';
        else{
            if (raAntigo[1] == 'N')
            raNovo[9] = '3';
        }

        k = 5;
        for (int j = 10; j < 13; j++){
            raNovo[j] = raAntigo[k];
            k++;
        }

        raNovo[14] = '\0';
        printf("RA novo: %s\n", raNovo);
}

int main (void){
    int qtdRAs;
    char raAntigo[9];

    printf("Informe a quantidade de RAs: ");
    scanf("%i", &qtdRAs);

    for (int i = 0; i < qtdRAs; i++){
        printf("Digite o RA antigo: ");
        scanf("%s", raAntigo);

        fraNovo(raAntigo);
    }

    printf("\nPrograma finalizado...\n");
}
