#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#define MAX_CONTAS 100

//-------------------estrutura--------------------------------
typedef struct CONTA {
    char nome[30];
    int numConta;
    float saldo;
}TCONTA;

//-----------------protótipos das funções---------------------
void abrirConta(TCONTA contas[], int *numContas);
void realizarDeposito(TCONTA contas[], int numContas);
void realizarRetirada(TCONTA contas[], int numContas);
void mostrarContas(TCONTA contas[], int numContas);
void ordenarContasPorNome(TCONTA contas[], int numContas);

//---------------Ordenação por inserção-----------------------
void insercao (int numContas, TCONTA *contas)
{
    int i,j, y;
	TCONTA aux;
    j = 1;
    while (j <= numContas-1)
	{
		 aux = contas[j];

		 i = j - 1;
         while (  i >= 0 &&  strcmp(contas[i].nome, aux.nome) > 0 )
         {
		   contas[i+1] = contas[i];
	       i = i - 1;

		 }
        contas[i+1] = aux;
        j = j + 1;

   }
}
//---------------------Ordenação por seleção----------------------------------
void selecao (int tam, TCONTA *contas)
{
     int minimo, i, j;
	 TCONTA aux;
     for (i=0; i<=tam-1;i++)
	 {
         minimo = i;

         for (j=i+1;j<=tam-1;j++)
		 {
             if ( contas[j].numConta < contas[minimo].numConta )
			 {
                 minimo = j;
             }
         }
		 aux = contas[minimo];
         contas[minimo] = contas[i];
         contas[i] = aux;
     }
 }
//---------------------Pesquisa Binária---------------------------------------
int PesquisaBinariaRec(TCONTA *contas, int Inicio, int numContas, int numConta)
{
  int Meio;
  if(Inicio>numContas)
    return -1;
  Meio = (Inicio + numContas) / 2;

  if(numConta>contas[Meio].numConta)
     return(PesquisaBinariaRec(contas,Meio + 1,numContas,numConta));

	if(numConta<contas[Meio].numConta)

    return(PesquisaBinariaRec(contas,Inicio,Meio-1,numConta));
  return Meio;
}
#endif
