#include<stdio.h>
#include<math.h>
#include<ctype.h>

//--------------------------constantes-------------------------
#define QTD_NOTAS 5
float numero[QTD_NOTAS];
int opcao;

//-----------------------chama funções-------------------------
int fentradaDados();
float fsoma();
float fmedia(float soma);
float fmediaPonderada();
float fdesvioPadrao(float media);
float fmaior(numero);
float fmenor(numero);

//-----------------------principal-----------------------------
int main (void)
{
    float resultado;
    printf("Bem-vindo(a)!!!\n\n");

    do{
        switch (opcao = fentradaDados())
        {
            case 1:
                resultado = fmedia(fsoma());
                printf ("\nMedia aritmetica: %.2f\n", resultado);
                break;
            case 2:
                resultado = fmediaPonderada();
                printf ("\nMedia ponderada: %.2f\n", resultado);
                break;
            case 3:
                resultado = fdesvioPadrao(fmedia(fsoma()));
                printf ("\nDesvio padrao: %.2f\n", resultado);
                break;
            case 4:
                resultado = fmaior(numero);
                printf ("\nO maior valor: %.2f\n", resultado);
                break;
            case 5:
                resultado = fmenor(numero);
                printf ("\nO menor valor: %.2f\n", resultado);
                break;
            case 6:
                printf("\nPrograma finalizado!\n");
                return 0;
            default:
                printf("\nOpcao invalida!\n");
                break;
        }

    }while (opcao != 6);

    printf("\n\nPrograma finalizado!\n");
    return 0;
}

//----------------------menu------------------------------------
void fmenu (){
    printf("\nEscolha uma das opcoes abaixo: \n");
    printf("[1] para exibir a media aritmetica\n");
    printf("[2] para exibir a media ponderada\n");
    printf("[3] para exibir o desvio padrao\n");
    printf("[4] para exibir o maior valor\n");
    printf("[5] para exibir o menor valor\n");
    printf("[6] para sair do programa\n");
    }

//----------------------entrada de dados------------------------
int fentradaDados()
{
    fmenu();

    while (1){
        char entrada[2];
        scanf("%s", entrada);
        if ((entrada[1]) == '\0' && isdigit(entrada[0])){
            opcao = atoi(entrada);
            if (opcao > 0 && opcao <= 6){
                break;
            }
        }
        printf ("Opcao invalida. Tente novamente.\n");
    }


    if (opcao != 6){
        for (int i = 0; i < QTD_NOTAS; i++){
        printf("Insira o valor %i: ", i+1);
        scanf("%f", &numero[i]);
        }
    }
    return opcao;
}

//------------------------soma---------------------------------
float fsoma()
{
    float soma = 0.0;

    for (int i = 0; i <= QTD_NOTAS; i++){
        soma += numero[i];
    }
    return soma;
}

//------------------------media--------------------------------
float fmedia(float soma)
{
    float media = soma / QTD_NOTAS;
    return media;
}

//------------------------media ponderada----------------------
float fmediaPonderada()
{
    const float peso[QTD_NOTAS] = {10, 15, 20, 25, 30};

    float somaMult= 0.0;
    float somaPesos = 0.0;

    for (int i = 0; i < QTD_NOTAS; i++){
        somaMult += (numero[i] * peso[i]);
        somaPesos += peso[i];
    }

    float mediaPonderada = somaMult / somaPesos;
    return mediaPonderada;
}

//----------------------desvio padrao--------------------------
float fdesvioPadrao(float media) {

    float desvioPadrao = 0.0;

    for (int i = 0; i < QTD_NOTAS; i++){
        desvioPadrao += pow(numero[i] - media, 2);
    }
    return sqrt(desvioPadrao/QTD_NOTAS);
}

//-----------------------maior---------------------------------
float fmaior()
{
    float maior = numero[0];

    for (int i = 0; i < QTD_NOTAS; i++){
        if (numero[i] > maior){
           maior = numero[i];
        }
    }
    return maior;
}

//----------------------menor----------------------------------
float fmenor()
{
    float menor = numero[0];

    for (int i = 0; i < QTD_NOTAS; i++){
        if (numero[i] < menor){
           menor = numero[i];
        }
    }
    return menor;
}
