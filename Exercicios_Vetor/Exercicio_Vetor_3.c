#include <stdio.h>

int main () {

int vetA[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int vetB[10] = {11, 21, 31, 41, 51, 61, 71, 81, 91, 101};
int vetC[20];

int i = 0;

for (i = 0; i < 10;i++){
    vetC[i] = vetA[i];
    printf("%i ", vetC[i]);

    vetC[i+1] = vetB[i];
    printf("%i ", vetC[i+1]);

}

}
