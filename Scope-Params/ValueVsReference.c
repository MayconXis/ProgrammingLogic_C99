#include <stdio.h>

void forValor(int n);

void forReference(int *n);

int main() {
    int teste = 100;

    printf("Normal : %d\n", teste);
    forValor(teste);
    printf("After test forValor %d\n", teste);
    forReference(&teste);
    printf("After test forReference %d\n", teste);
    return 0;
}


void forValor(int n) {
    n = n + 10;
    printf("During test forValor : %d\n", n);
}

void forReference(int *n) {
    *n = *n + 10;
    printf("During test forReference : %d\n", *n);
}
