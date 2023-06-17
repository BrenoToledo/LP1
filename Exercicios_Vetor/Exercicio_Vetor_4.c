#include <stdio.h>

int main(void) {

int nComodos = 0;

printf ("Informe a quantidade de comodos: ");
scanf ("%i", &nComodos);

// Vetores para Áreas, Potências, Classes de Comodo e Número de Lâmpadas de acordo com o número de Cômodos
int area[nComodos];
int potencia[nComodos];
int nLampadas[nComodos];
int classe[nComodos];

// Totais e contador
int tLampadas = 0;
int tPotencia = 0;
int i;

for (i = 1; i <= nComodos; i++){
    printf ("Informe a area do comodo [%i]: ", i);
    scanf("%i", &area[i]);

    printf ("Informe a classe do comodo [%i]: ", i);
    scanf("%i", &classe[i]);

    while(classe[i] > 5 || classe[i] < 0){
            printf("Erro: Valor invalido. Insira uma classe entre 1 e 5: ");
            scanf("%i", &classe[i]);
    }
       
    switch (classe[i])
    {
    case 1:
        potencia[i] = 10 * area[i];
        break;
    case 2:
        potencia[i] = 15 * area[i];
        break;
    case 3:
        potencia[i] = 18 * area[i];
        break;
    case 4:
        potencia[i] = 20 * area[i];
        break;
    case 5:
        potencia[i] = 25 * area[i];
        break;
                    
    //default:
        //printf("Erro: Valor invalido. Insira uma classe entre 1 e 5\n");
        //break;
    }

    if (potencia[i] % 60 > 0){
        nLampadas[i] = (potencia[i]/60)+1;}
    else{
        nLampadas[i] = potencia[i] / 60;}

    printf ("A potencia de iluminacao do comodo [%i] eh: %i\n", i, potencia[i]);
    printf ("O numero de lampadas necessarias no comodo [%i] eh: %i\n\n", i, nLampadas[i]);

    tLampadas = tLampadas + nLampadas[i];
    tPotencia = tPotencia + potencia[i];

}

printf("O total de lampadas eh: %i\n", tLampadas);
printf("O total de potencia de iluminacao eh: %i\n", tPotencia);

}