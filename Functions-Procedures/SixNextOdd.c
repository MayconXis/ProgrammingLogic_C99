#include <stdio.h>

void itsImpar(int a, int *soma);


int main() {
    int x,y,inicio,fim;
    int somaImpar = 0;
    scanf("%d %d", &x, &y);
    if (x < y) {
        inicio = x;
        fim = y;
    } else {
        inicio = y;
        fim = x;
    }

    for (int i = (inicio + 1); i < fim; i++) {
        itsImpar(i,&somaImpar);
    }
    printf("%d",somaImpar);
    return 0;
}


void itsImpar(int a, int *soma) {
    if (a % 2 != 0) {
        *soma += a;
    }
}