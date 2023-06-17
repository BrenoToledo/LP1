#include<stdio.h>
#include<ctype.h>
#include<string.h>

void RemoverCaracteres(char *frase)
{
    int tamanho = strlen(frase);
    char aux[tamanho];
    int i, j = 0;

    for (i = 0; i < tamanho; i++)
    {
        char letra = *(frase + i);

        if (isalpha(letra) != 0 || letra == ' ')
        {
            *(aux + j) = *(frase + i);
            j++;
        }
        else
        {
            *(aux + j) = ' ';
            continue;
        }
    }
    *(aux + j) = '\0';
    strcpy(frase,aux);
}

int ContarPalavra(char *frase, char *palavra)
{
    char *p;
    int cont = 0;
    p = strtok(frase," ");

    while (p)
    {
        if (strcmp(p, palavra) == 0)
        {
            cont++;
        }
        p = strtok(NULL," ");
    }
    return cont;
}

void main ()
{
    char frase[200];
    char palavra[50];

    printf("Digite a frase: ");
    scanf(" %[^\n]", frase);

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    RemoverCaracteres(frase);
    //printf("Frase sem caracteres: %s\n", frase);
    int quantidade = ContarPalavra(frase, palavra);

    if (quantidade != 1)
    printf("\nA palavra %s apareceu %i vezes na frase\n", palavra, quantidade);
    else
    printf("\nA palavra %s apareceu uma vez na frase\n", palavra);

    printf("\nPrograma encerrado...\n");
}
