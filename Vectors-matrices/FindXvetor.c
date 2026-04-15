#include <stdio.h>
#define TAM 10

int main() {
    int vector[TAM];
    int x[3];


    for (int i = 0; i < 3; i++) {
        int nVetor;
        scanf("%d", &nVetor);
        if (nVetor != 0) {
            x[i] = nVetor;
        } else {
            printf("Numero invalido, digite novamente\n");
            i--;
        }
    }

    for (int i = 0; i < TAM; i++) {
        int numeroVetor;
        scanf("%d", &numeroVetor);
        if (numeroVetor != 0) {
            vector[i] = numeroVetor;
        } else {
            printf("Numero invalido, digite novamente\n");
            i--;
        }
    }

    for (int j = 0; j < TAM; j++) {
        for (int y = 0; y < 3; y++) {
            if (vector[j] == x[y]) {
                vector[j] = 0;
            }
        }

        printf("%d\n", vector[j]);
    }

    return 0;
}