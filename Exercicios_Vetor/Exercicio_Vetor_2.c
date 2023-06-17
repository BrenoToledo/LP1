#include <stdio.h>

int main(void){

int vetA[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int vetB[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int vetC[10];

int i = 0;

for (i = 0; i < 10;i++){
    vetC[i] = vetA[i] + vetB[i];
    printf("%i ", vetC[i]);

}


}
