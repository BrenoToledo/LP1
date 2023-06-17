#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char primeiraPalavra[14];
    char segundaPalavra[9];
    char terceiraPalavra[12];
    char entrada[34];


    printf("Informe a primeira palavra: ");
    //fflush(stdin);
    scanf("%s",primeiraPalavra);
    //printf("%s\n", primeiraPalavra);

    //fflush(stdin);
    printf("Informe a segunda palavra: ");
    scanf("%s",segundaPalavra);
    //printf("%s\n", segundaPalavra);

    //fflush(stdin);
    printf("Informe a terceira palavra: ");
    scanf("%s",terceiraPalavra);
    //printf("%s\n", terceiraPalavra);

    //primeiraPalavra[14] = '\0';
    //segundaPalavra[9] = '\0';
    //terceiraPalavra[12] = '\0';

    strcpy(entrada,"");
    strcat(entrada, primeiraPalavra);
    strcat(entrada, segundaPalavra);
    strcat(entrada, terceiraPalavra);

    //printf("%s\n", entrada);

    int tamanho = strlen(entrada+1);

    char aguia[tamanho];
    strcpy (aguia, "vertebradoavecarnivoro");
    if (strcmp(aguia, entrada) == 0)
        printf("aguia");

    char pomba[tamanho];
    strcpy (pomba, "vertebradoaveonivoro");
    if (strcmp(pomba, entrada) == 0)
        printf("pomba");

    char homem[tamanho];
    strcpy (homem, "vertebradomamiferoonivoro");
    if (strcmp(homem,entrada) == 0)
        printf("homem");

    char vaca[tamanho];
    strcpy (vaca, "vertebradomamiferoherbivoro");
    if (strcmp(vaca,entrada) == 0)
        printf("vaca");

    char pulga[tamanho];
    strcpy (pulga, "invertebradoinsetohematofago");
    if (strcmp(pulga,entrada) == 0)
        printf("pulga");

    char lagarta[tamanho];
    strcpy (lagarta, "invertebradoinsetoherbivoro");
    if (strcmp(lagarta,entrada) == 0)
        printf("lagarta");

    char sanguessuga[tamanho];
    strcpy (sanguessuga, "invertebradoanelideohematofago");
    if (strcmp(sanguessuga,entrada) == 0)
        printf("sanguessuga");

    char minhoca[tamanho];
    strcpy (minhoca, "invertebradoanelideoonivoro");
    if (strcmp(minhoca,entrada) == 0)
        printf("minhoca");

}
