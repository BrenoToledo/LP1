#include<stdio.h>
#include<ctype.h>
#include<string.h>

int verificaVogal (char letra){
    int vogal = (tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) == 'i' || tolower(letra) == 'o' || tolower(letra) == 'u');
    return vogal;
}

void cripto(char* frase){

    int tamanho = strlen(frase);
    char auxiliar[tamanho];
    int i, j;
    j = tamanho - 2;


    for (i = 0; i < tamanho ; i++){
        char letra = *(frase + i);
        int vogal = verificaVogal(letra);

        if (*(frase + i) == ' ')
        *(auxiliar + j) = *(frase + i);//mesma coisa de auxiliar[j] = frase[i];

        else if(isalpha(*(frase + i)) == 0 || vogal == 0)
        *(auxiliar + j) = '#';

        else
        *(auxiliar + j) = *(frase + i);

        j--;
    }

    auxiliar[tamanho-1] = '\0';
    strcpy(frase, auxiliar);
}


int main (){
    char frase[50];

    printf("Digite a frase: ");
    fgets(frase, 50, stdin);

    cripto(frase);

    printf("Frase criptografada: %s\n", frase);
}
