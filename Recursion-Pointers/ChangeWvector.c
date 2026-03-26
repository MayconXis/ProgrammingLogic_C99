#include <stdio.h>

int main() {
    int vetor[3] = {10, 20, 30};
    int *p = vetor;

    printf("Before: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);

    *p = 100;         // Altera o primeiro (v[0])
    *(p + 1) = 200;   // Pula 1 casa de memória e altera o segundo (v[1])
    *(p + 2) = 300;   // Pula 2 casas de memória e altera o terceiro (v[2])

    printf("After: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);

    return 0;
}