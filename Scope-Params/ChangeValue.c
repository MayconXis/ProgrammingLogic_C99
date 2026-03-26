#include <stdio.h>


void test();

int main() {
    int numero = 50;
    printf("Before: %d\n", numero);
    test(numero);
    printf("After Test: %d\n", numero);
    return 0;
}

void test(int x) {
    x = x + 10;
    printf("test: %d\n", x);
}
