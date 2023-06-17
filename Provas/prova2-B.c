#include <stdio.h>
#include <string.h>

void printStringArray(char **array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%s ", *(array + i));
    }
    printf("\n");
}

int main()
{
   char palavra[30]={"Pasta de Amendoim"};
   int i, cont=0, tam;

   tam=strlen(palavra);

   for (i=0;i<tam;i++) {

	  if (*(palavra+i)==toupper(*(palavra+i)))
          *(palavra+i) = tolower(*(palavra+i));
       else
          *(palavra+i) = toupper(*(palavra+i));

   }

   for (i=0;i<tam;i++)
   {
       printf("%c",*(palavra+i));
   }

}
