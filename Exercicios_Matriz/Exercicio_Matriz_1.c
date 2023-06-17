#include <stdio.h>

int main (void){

int m [5][6] = {{00, 01, 02, 03, 04, 05},
                {10, 11, 12, 13, 14, 15},
                {20, 21, 22, 23, 24, 25},
                {30, 31, 32, 33, 34, 35},
                {40, 41, 42, 43, 44, 45}};

int Vet[30];
int i, j, k, l;
int Diagonal[5];

k = 0;
l = 0;

for (i = 0; i < 5; i++){
    for (j = 0; j <6; j++){
    Vet[k] = m[i][j];
    k = k + 1;
    if (i == j){
        Diagonal[l] = m[i][j];
        l = l + 1;}
    }
}

k = 0;
printf("Vetores: ");
for (k = 0; k < 30; k++){
    printf("%i ", Vet[k]);
}

printf ("\nDiagonal: ");
l = 0;
for (l = 0; l < 5; l++){
    printf("%i ", Diagonal[l]);    
}

}