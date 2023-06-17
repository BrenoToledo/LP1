#include <stdio.h>
#include <string.h>

struct funcionario
{
   int nrmatricula;
   char nome[40];
   float salario;
};


int PesquisaBinariaString(struct funcionario *Tab, int Inicio, int Fim, char *Valor)
{  
  int Meio;
  
  if(Inicio>Fim) 
    return -1; // Nesse caso o valor não foi encontrado (devolve -1)
  Meio = (Inicio + Fim) / 2; // Calcula o índice do elemento do meio
  // O valor é maior então procura na sub-tabela à direita  
  if (strcmp(Tab[Meio].nome, Valor) < 0)
  //if(*Valor>Tab[Meio].nome) 
     return(PesquisaBinariaString(Tab,Meio + 1,Fim,Valor));
  // O valor é menor então procura na sub-tabela à esquerda
  if(strcmp(Tab[Meio].nome, Valor) > 0)
    return(PesquisaBinariaString(Tab,Inicio,Meio-1,Valor));
  // Se não maior nem menor então só pode ser igual. Devolve…
  return Meio; 
} // Fim da função

int PesquisaBinariaRec(struct funcionario *Tab, int Inicio, int Fim, int Valor)
{
  int Meio;
  printf("\nInicio: %i e Fim: %i",Inicio, Fim);
  if(Inicio>Fim) 
    return -1; // Nesse caso o valor não foi encontrado (devolve -1)
  Meio = (Inicio + Fim) / 2; // Calcula o índice do elemento do meio
  // O valor é maior então procura na sub-tabela à direita  						
  if(Valor>Tab[Meio].nrmatricula) 
     return(PesquisaBinariaRec(Tab,Meio + 1,Fim,Valor));
  // O valor é menor então procura na sub-tabela à esquerda
					//if(strcmp(Tab[Meio].nome, Valor) < 0)
	if(Valor<Tab[Meio].nrmatricula) 				
  // Se não maior nem menor então só pode ser igual. Devolve…
    return(PesquisaBinariaRec(Tab,Inicio,Meio-1,Valor));
  return Meio; 
} // Fim da função


int main()
{
   struct funcionario vetorfunc[5];
   char nome[40];
   int i, mat, indice;   
   
   for (i=0;i<5;i++)
   {
      printf("Informe numero de matricula: ");
	  scanf("%i",&vetorfunc[i].nrmatricula);
      
	  printf("Informe o nome: ");
	  scanf("%s",&vetorfunc[i].nome);	  	  
	  
	  printf("Informe o salario: ");
	  scanf("%f",&vetorfunc[i].salario);
   }
   
   printf("\nPesquisa  --> Informe Matricula: ");
   scanf("%i",&mat);   
   indice=PesquisaBinariaRec(vetorfunc, 0, 4, mat);
   printf("\nteste: %i",indice);
   
   printf("Matricula %i Nome: %s tem salario = %.2f",vetorfunc[indice].nrmatricula, vetorfunc[indice].nome, vetorfunc[indice].salario);
   
   printf("\nPesquisa  --> Informe Nome: ");
   scanf("%s",&nome);      
   indice=PesquisaBinariaString(vetorfunc, 0, 4, nome);
   if (indice == -1)
     printf("Pessoa não encontrada");
   else	 
     printf("Matricula %i Nome: %s tem salario = %.2f",vetorfunc[indice].nrmatricula, vetorfunc[indice].nome, vetorfunc[indice].salario);
   
   return 0;
}

