#include <stdio.h>
void test(int *x);

int main() {
    int numero = 100;
    printf("Before : %d\n", numero);
    test(&numero);
    printf("Before Test %d\n", numero);
    return 0;
}


void test(int *x) {
    *x = *x + 10;
    printf("Before: %d\n", *x );

}

