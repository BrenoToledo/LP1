#include<stdio.h>
#include<ctype.h>
#include<string.h>


int ContMaiuscula(char *palavra){

    int i, cont=0, tam;

    tam = strlen(palavra);

       for (i=0;i<tam;i++) {

          if (*(palavra+i)==toupper(*(palavra+i)))
            cont++;
          else
            cont--;

       }
       return cont;
}

void funcInverterCaracteres(char *palavra){

    int i, cont=0, tam;

    tam = strlen(palavra);

       for (i=0;i<tam;i++) {

          if (*(palavra+i)==toupper(*(palavra+i)))
              *(palavra+i) = tolower(*(palavra+i));
           else
              *(palavra+i) = toupper(*(palavra+i));

       }

}

void funcExibirVetor(char *palavra) {
    int tam;
    tam=strlen(palavra);

    for (int i=0;i<tam;i++)
        {
            printf("%c",*(palavra+i));
        }
            printf("\n");
}

int main()
{
    int Maiusculas;

   char palavra[30]={"Pasta de Amendoim"};

    funcInverterCaracteres(palavra);
    funcExibirVetor(palavra);
    Maiusculas = ContMaiuscula(palavra);
    printf("Foram encontrados %i caracteres maiusculos!\n",Maiusculas);
}
