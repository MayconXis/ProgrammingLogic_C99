#include <stdio.h>

void HowManyEvenOdd(int a, int *contImpar, int *contPar);
void HowManyPositiveNegative(int a, int *contPositive, int *contNegative);


int main() {
    int n;
    int pares = 0, impar = 0, positivos = 0, negativos = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        HowManyEvenOdd(n, &impar, &pares);
        HowManyPositiveNegative(n, &positivos, &negativos);
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    return 0;
}


void HowManyEvenOdd(int a, int *contImpar, int *contPar) {
    if (a % 2 == 0) {
        (*contPar)++;
    } else {
        (*contImpar)++;
    }
}

void HowManyPositiveNegative(int a, int *contPositive, int *contNegative) {
    if (a > 0) {
        (*contPositive)++;
    } else if (a < 0) {
        (*contNegative)++;
    }
}
