#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char string[15];
    int nLinhas;

    printf("Insira o numero de linhas: ");
    scanf("%i", &nLinhas);

    for (int i = 1; i <= nLinhas; i++){
        printf("Insira o valor da linha %i: ", i);
        scanf("%s", string);

        int soma = 0;
        int num = 0;

        for (int j = 0; j < 15; j++) {
            if (isdigit(string[j])) { //função 'isdigit()' verifica se o caracter é numerico ou não

                char caracter[2] = {string[j],'\0'}; //cria uma string temporária para armazenar o valor caracter
                num = num * 10 + atoi(caracter); //função atoi espera uma string, se inserir caracter direto dá erro.
                //num * 10 para deslocar o valor numérico já armazenado para a direita
                //depois soma com o valor de caracter. Por exemplo (2 * 10) + 3 = 23

                /********alternativa1********
                    caracter = string[j];
                    num = num * 10 + atoi(&caracter); //usa ponteiro &caracter
                ********alternativa1*********


                ********alternativa2********
                    num = num * 10 + ((int)string[i] - 48):
                    -48 converte o valor do caracter para numerico, usa casting (int).
                    Ver tabela ascii.
                ********alternativa2*********


                ********alternativa3********
                    num = num * 10 + (string[i] - '0'):
                    subtrair por '0' também converte um caracter para numerico
                    mesmo resultado da função atoi.
                ********alternativa3*********/

            } else {
                soma += num;
                num = 0;
            }
        }
        // adiciona o último número encontrado à soma
        soma += num;

        printf("A soma dos numeros da linha %i eh: ", i);
        printf("%d\n", soma);

    }

}
