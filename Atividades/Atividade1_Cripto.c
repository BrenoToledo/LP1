#include <stdio.h>
#include <string.h>

void cripto(char entrada[9], char saida[9]) {
    char controle1[15] = "DanilotsrACEFG";
    char controle2[15] = "B0NITOeu _%$#m";
    int i, j, tamanho;

    tamanho = strlen(entrada);
    for (i = 0; i < tamanho; i++) { //i = i + 1
        for (j = 0; j < 15; j++) {
            if (entrada[i] == controle1[j]) { //== igual || ou != diferente
                saida[i] = controle2[j];
                break;
            }
            else if (entrada[i] == controle2[j]) {
                saida[i] = controle1[j];
                break;
            }
            else {
                saida[i] = entrada[i]; //criptografado
            }
        }
    }
    saida[tamanho] = '\0';
}

int main() {
    char texto1[9], texto2[9], texto3[9];
    printf("Digite uma palavra de ate 8 caracteres: ");
    scanf("%[^\n]", texto1);

    cripto(texto1, texto2);
    cripto(texto2, texto3);

    printf("O texto criptografado eh: %s\n", texto2);
    printf("E o texto descriptografado eh: %s\n", texto3);

    return 0;
}


