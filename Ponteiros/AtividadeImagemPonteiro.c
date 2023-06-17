#include<stdio.h>
#include<string.h>

void alteraExtensao(char *imagem){

    char *ext;
    ext = strchr(imagem, '.');

    if (strcmp(".bmp", ext) == 0){
        strcpy(ext,".gif");
        printf("\nNovo nome do arquivo: %s\n", imagem);
    }
    else{
        printf("\nNao eh bmp!\n");
    }

}

int main (){

    char imagem[100];

    printf("Informe o nome do arquivo com a extensao: ");
    scanf(" %[^\n]",imagem);

    alteraExtensao(imagem);

    printf("\nPrograma encerrado...\n");
}
