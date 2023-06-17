/*beecrowd 1049
Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema.
Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.*/

#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char primeiraPalavra[13];
    char segundaPalavra[9];
    char terceiraPalavra[11];

    printf("Informe a primeira palavra: ");

    fflush(stdin);
    gets( primeiraPalavra);

    printf("Informe a segunda palavra: ");
    gets(segundaPalavra);

    printf("Informe a terceira palavra: ");
    gets(terceiraPalavra);

    /*nos comparativos abaixo, poderia usar as funções strlwr para converter em minusculo ou strupr para converter em maiusculo,
    mas o problema nao pediu isso*/

    int aguia = (strcmp(primeiraPalavra, "vertebrado") == 0 && strcmp(segundaPalavra, "ave") == 0 && strcmp(terceiraPalavra, "carnivoro") == 0);
    if (aguia)
        printf("aguia\n");

    int pomba = (strcmp(primeiraPalavra, "vertebrado") == 0 && strcmp(segundaPalavra, "ave") == 0 && strcmp(terceiraPalavra, "onivoro") == 0);
    if (pomba)
        printf("pomba\n");

    int homem = (strcmp(primeiraPalavra, "vertebrado") == 0 && strcmp(segundaPalavra, "mamifero") == 0 && strcmp(terceiraPalavra, "onivoro") == 0);
    if (homem)
        printf("homem\n");

    int vaca = (strcmp(primeiraPalavra, "vertebrado") == 0 && strcmp(segundaPalavra, "mamifero") == 0 && strcmp(terceiraPalavra, "herbivoro")== 0);
    if (vaca)
        printf("vaca\n");



    int pulga = (strcmp(primeiraPalavra, "invertebrado") == 0 && strcmp(segundaPalavra, "inseto") == 0 && strcmp(terceiraPalavra, "hematofago")== 0);
    if (pulga)
        printf("pulga\n");

    int lagarta = (strcmp(primeiraPalavra, "invertebrado") == 0 && strcmp(segundaPalavra, "inseto") == 0 && strcmp(terceiraPalavra, "herbivoro")== 0);
    if (lagarta)
        printf("lagarta\n");

    int sanguessuga = (strcmp(primeiraPalavra, "invertebrado") == 0 && strcmp(segundaPalavra, "anelideo") == 0 && strcmp(terceiraPalavra, "hematofago")== 0);
    if (sanguessuga)
        printf("sanguessuga\n");

    int minhoca = (strcmp(primeiraPalavra, "invertebrado") == 0 && strcmp(segundaPalavra, "anelideo") == 0 && strcmp(terceiraPalavra, "onivoro")== 0);
    if (minhoca)
        printf("minhoca\n");
}

